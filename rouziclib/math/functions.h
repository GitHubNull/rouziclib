#define pi 3.14159265358979323846264338327950288
#define e_ 2.7182818284590452353602874713526625

#define sign(x)		(((x) > 0) - ((x) < 0))
#define positive(x)	((x) > 0 ? (x) : 0)
#define MAXN(x, y)	(((x) > (y)) ? (x) : (y))
#define MINN(x, y)	(((x) < (y)) ? (x) : (y))
#define	ffabs(x)	(*((uint64_t *) (x)) &= 0x7FFFFFFFFFFFFFFF)		// x = |x| for doubles (makes the sign bit be 0 by binary masking), in-place

#ifdef _WIN32
//#define copysign(x, y)	( (((x) < 0 && (y) > 0) || ((x) > 0 && (y) < 0)) ? -(x) : (x) )
//#define nearbyint(x)	(((x)>=0.) ? (int32_t) ((x)+0.5) : (int32_t) ((x)-0.5))
#endif

extern int32_t fphypot(int32_t x, int32_t y);
extern double sq(double x);
extern double gaussian(double x);
extern double sinc(double x, double fc);
extern double blackman(double x, double range);

extern double roundaway(double x);
extern double rangewrap(double x, double low, double high);
extern double rangelimit(double x, double min, double max);
extern float rangelimitf(float x, float min, float max);
extern int32_t rangelimit_i32(int32_t x, int32_t min, int32_t max);
extern void swap_double(double *a, double *b);
extern void swap_i32(int32_t *a, int32_t *b);
extern void minmax_double(double *a, double *b);
extern void minmax_i32(int32_t *a, int32_t *b);
extern double double_add_ulp(double x, int ulp);
extern double normalised_notation_split(double number, double *m);
