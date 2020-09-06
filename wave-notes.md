   // set your own icon and register her callback to activate by an click
    // remember, an app icon must have an size of 64x64 pixel with an alpha channel
    // use https://lvgl.io/tools/imageconverter to convert your images and set "true color with alpha" to get fancy images
    // the resulting c-file can put in /app/examples/images/


VSCode was recompiling everything on every build. A possible cause: running out of file watch handles.
Max value is 524288, but there is a memory hit.

Current value -

danny@vivo:~$ cat /proc/sys/fs/inotify/max_user_watches
65536

sudo gedit /etc/sysctl.conf 

doubled current value by adding at the end -

fs.inotify.max_user_watches=131072

to make it take effect -

sudo sysctl -p

---------------------------

in my-ttgo-watch.ino added

#include "app/wave/wave.h"
line 79 wave_app_setup();






