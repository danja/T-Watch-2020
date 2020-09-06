/****************************************************************************
 *   Aug 3 12:17:11 2020
 *   Copyright  2020  Dirk Brosswick
 *   Email: dirk.brosswick@googlemail.com
 ****************************************************************************/
 
/*
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */
#include "config.h"
#include <TTGO.h>

#include "wave.h"
#include "wave_main.h"
#include "wave_setup.h"

#include "gui/mainbar/app_tile/app_tile.h"
#include "gui/mainbar/main_tile/main_tile.h"
#include "gui/mainbar/mainbar.h"
#include "gui/statusbar.h"

uint32_t wave_main_tile_num;
uint32_t wave_setup_tile_num;

// app icon container
lv_obj_t *wave_icon_cont = NULL;
lv_obj_t *wave_icon = NULL;
lv_obj_t *wave_icon_info = NULL;

// widget icon container
lv_obj_t *wave_widget_cont = NULL;
lv_obj_t *wave_widget_icon = NULL;
lv_obj_t *wave_widget_icon_info = NULL;
lv_obj_t *wave_widget_label = NULL;

// declare you images or fonts you need
LV_IMG_DECLARE(wave_64px);
LV_IMG_DECLARE(wave_48px);
LV_IMG_DECLARE(info_1_16px);
// declare callback functions
static void enter_wave_event_cb( lv_obj_t * obj, lv_event_t event );

// setup routine for example app
void wave_setup( void ) {
    // register 2 vertical tiles and get the first tile number and save it for later use
    wave_main_tile_num = mainbar_add_app_tile( 1, 2 );
    wave_setup_tile_num = wave_main_tile_num + 1;

    // create an app icon, label it and get the lv_obj_t icon container
    wave_icon_cont = app_tile_register_app( "Wave");
    // set your own icon and register her callback to activate by an click
    // remember, an app icon must have an size of 64x64 pixel with an alpha channel
    // use https://lvgl.io/tools/imageconverter to convert your images and set "true color with alpha" to get fancy images
    // the resulting c-file can put in /app/examples/images/
    wave_icon = lv_imgbtn_create( wave_icon_cont, NULL );
    lv_imgbtn_set_src( wave_icon, LV_BTN_STATE_RELEASED, &wave_64px);
    lv_imgbtn_set_src( wave_icon, LV_BTN_STATE_PRESSED, &wave_64px);
    lv_imgbtn_set_src( wave_icon, LV_BTN_STATE_CHECKED_RELEASED, &wave_64px);
    lv_imgbtn_set_src( wave_icon, LV_BTN_STATE_CHECKED_PRESSED, &wave_64px);
    lv_obj_reset_style_list( wave_icon, LV_OBJ_PART_MAIN );
    lv_obj_align( wave_icon , wave_icon_cont, LV_ALIGN_IN_TOP_LEFT, 0, 0 );
    lv_obj_set_event_cb( wave_icon, enter_wave_event_cb );

    // set an small info indicator at your app icon to inform the user about the state or news
    wave_icon_info = lv_img_create( wave_icon_cont, NULL );
    lv_img_set_src( wave_icon_info, &info_1_16px );
    lv_obj_align( wave_icon_info, wave_icon_cont, LV_ALIGN_IN_TOP_RIGHT, 0, 0 );
    lv_obj_set_hidden( wave_icon_info, false );

    // init main and setup tile, see wave_main.cpp and wave_setup.cpp
    wave_main_setup( wave_main_tile_num );
    wave_setup_setup( wave_setup_tile_num );

#ifdef EXAMPLE_WIDGET
    // get an widget container from main_tile
    // remember, an widget icon must have an size of 64x64 pixel
    // total size of the container is 64x80 pixel, the bottom 16 pixel is for your label
    wave_widget_cont = main_tile_register_widget();
    wave_widget_icon = lv_imgbtn_create( wave_widget_cont, NULL );
    lv_imgbtn_set_src( wave_widget_icon, LV_BTN_STATE_RELEASED, &wave_48px);
    lv_imgbtn_set_src( wave_widget_icon, LV_BTN_STATE_PRESSED, &wave_48px);
    lv_imgbtn_set_src( wave_widget_icon, LV_BTN_STATE_CHECKED_RELEASED, &wave_48px);
    lv_imgbtn_set_src( wave_widget_icon, LV_BTN_STATE_CHECKED_PRESSED, &wave_48px);
    lv_obj_reset_style_list( wave_widget_icon, LV_OBJ_PART_MAIN );
    lv_obj_align( wave_widget_icon , wave_widget_cont, LV_ALIGN_IN_TOP_LEFT, 0, 0 );
    lv_obj_set_event_cb( wave_widget_icon, enter_wave_event_cb );

    // set an small info icon at your widget icon to inform the user about the state or news
    wave_widget_icon_info = lv_img_create( wave_widget_cont, NULL );
    lv_img_set_src( wave_widget_icon_info, &info_1_16px );
    lv_obj_align( wave_widget_icon_info, wave_widget_cont, LV_ALIGN_IN_TOP_RIGHT, 0, 0 );
    lv_obj_set_hidden( wave_widget_icon_info, false );

    // label your widget
    wave_widget_label = lv_label_create( wave_widget_cont , NULL);
    lv_label_set_text( wave_widget_label, "Wave");
    lv_obj_reset_style_list( wave_widget_label, LV_OBJ_PART_MAIN );
    lv_obj_align( wave_widget_label, wave_widget_cont, LV_ALIGN_IN_BOTTOM_MID, 0, 0);
#endif // EXAMPLE_WIDGET
}

uint32_t wave_get_app_main_tile_num( void ) {
    return( wave_main_tile_num );
}

uint32_t wave_get_app_setup_tile_num( void ) {
    return( wave_setup_tile_num );
}

/*
 *
 */
static void enter_wave_event_cb( lv_obj_t * obj, lv_event_t event ) {
    switch( event ) {
        case( LV_EVENT_CLICKED ):       statusbar_hide( true );
                                        wave_hide_app_icon_info( true );
                                        #ifdef EXAMPLE_WIDGET
                                            wave_hide_widget_icon_info( true );
                                        #endif
                                        mainbar_jump_to_tilenumber( wave_main_tile_num, LV_ANIM_OFF );
                                        break;
    }    
}

/*
 *
 */
void wave_hide_app_icon_info( bool show ) {
    if ( wave_icon_info == NULL )
        return;
    
    lv_obj_set_hidden( wave_icon_info, show );
    lv_obj_invalidate( lv_scr_act() );
}

/*
 *
 */
void wave_hide_widget_icon_info( bool show ) {
    if ( wave_widget_icon_info == NULL )
        return;

    lv_obj_set_hidden( wave_widget_icon_info, show );
    lv_obj_invalidate( lv_scr_act() );
}