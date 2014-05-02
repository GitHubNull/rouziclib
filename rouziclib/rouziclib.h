#ifndef H_ROUZICLIB
#define H_ROUZICLIB
#ifdef __cplusplus
extern "C" {
#endif

/* Make a .h file in your project containing an include to this file and 
 * add the optional defines you like in it, like this:

#ifndef H_PRL
#define H_PRL
#ifdef __cplusplus
extern "C" {
#endif

#define LBD	12
#define GAUSSLIMIT 0.0002

#include <rouziclib/rouziclib.h>

#ifdef __cplusplus
}
#endif
#endif

*/


// Comment includes out as needed

#include "fixedpoint/fp.h"

#include "general/structs.h"

#include "graphics/graphics.h"
#include "graphics/srgb.h"
#include "graphics/colour.h"
#include "graphics/blending.h"
#include "graphics/blit.h"
#include "graphics/drawline.h"
#include "graphics/drawprimitives.h"

#include "geometry/intersection.h"
#include "math/functions.h"
#include "math/rand.h"



#ifdef __cplusplus
}
#endif
#endif