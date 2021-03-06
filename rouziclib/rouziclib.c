/* Make a .c file in your project containing an include to the header file you must 
 * create in your project and an include to this file, rouziclib.c, like this:

#include "rl.h"

#include <rouziclib/rouziclib.c>

****************/

// C files
	
#include "general/xyz.c"
#include "general/time.c"
#include "general/estimates.c"
#include "general/mouse.c"

#include "memory/alloc.c"
#include "memory/circular_buffer.c"

#include "geometry/rect.c"
#include "geometry/intersection.c"
#include "geometry/rotation.c"
#include "geometry/fit.c"
#include "geometry/distance.c"
#include "math/functions.c"
#include "math/rand.c"
#include "math/dsp.c"
#include "math/matrix.c"
#include "math/physics.c"
#include "fixedpoint/fp.c"
#include "fastfloat/fastfloat.c"

#include "graphics/graphics.c"
#include "graphics/srgb.c"
#include "graphics/colour.c"
#include "graphics/blending.c"
#include "graphics/blit.c"
#include "graphics/drawline.c"
#include "graphics/drawrect.c"
#include "graphics/drawprimitives.c"
#include "graphics/drawqueue.c"
#include "graphics/processing.c"
#include "vector/vector.c"

#include "text/unicode_data.c"
#include "text/unicode.c"
#include "text/unicode_bidi.c"
#include "text/unicode_arabic.c"
#include "text/parse.c"
#include "text/format.c"
#include "text/string.c"
#include "text/edit.c"
#include "vector_type/vector_type.c"

#include "gui/zoom.c"
#include "gui/focus.c"
#include "gui/positioning.c"
#include "gui/layout.c"
#include "gui/drawelements.c"
#include "gui/visualisations.c"
#include "gui/inputprocessing.c"
#include "gui/knob_functions.c"
#include "gui/controls.c"
#include "gui/control_array.c"

#include "fileio/open.c"
#include "fileio/image.c"
#include "fileio/dir.c"

#include "libraries/opencv.c"
#include "libraries/opencl.c"
#include "libraries/sdl.c"
#include "libraries/devil.c"
#include "libraries/clfft.c"
#include "libraries/ffmpeg.c"
#include "libraries/libraw.c"
