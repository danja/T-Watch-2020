/****************************************************************************
 *   Aug 15 2020
 *   derived from Dirk Brosswick
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
#ifndef WAVE_H
    #define WAVE_H

    #include <TTGO.h>

//    #define EXAMPLE_WIDGET    // uncomment if an widget need

    void wave_setup( void );
    void wave_hide_app_icon_info( bool show );
    void wave_hide_widget_icon_info( bool show );
    uint32_t wave_get_app_setup_tile_num( void );
    uint32_t wave_get_app_main_tile_num( void );

#endif // _EXAMPLE_APP_H