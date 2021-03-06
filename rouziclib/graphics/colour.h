enum
{
	HUERAD,
	HUEDEG,
	HUE03,
};

#define WEIGHT_R 0.16		// perceptual weights for each channel used to compute perceptual luminosity
#define WEIGHT_G 0.73
#define WEIGHT_B 0.11

#ifdef COL_FRGB
	#define col_t 			frgb_t
	#define make_colour		make_colour_frgb
	#define frgb_to_col(x)		(x)
	#define lrgb_to_col(x)		lrgb_to_frgb(x)
	#define col_to_frgb(x)		(x)
	#define col_to_lrgb(x)		frgb_to_lrgb(x)
	#define make_colour_srgb	make_colour_srgb_f
	#define make_grey		make_grey_f
	#define make_colour_hsl		make_colour_hsl_f
	#define	make_colour_hsl_cw	make_colour_hsl_cw_f
	#define get_rgb_channel		get_frgb_channel
	#define set_rgb_channel		set_frgb_channel
	#define col_to_rgb		frgb_to_rgb
	#define col_to_hsl		frgb_to_hsl
#else
	#define col_t			lrgb_t
	#define make_colour		make_colour_lin
	#define frgb_to_col(x)		frgb_to_lrgb(x)
	#define lrgb_to_col(x)		(x)
	#define col_to_frgb(x)		lrgb_to_frgb(x)
	#define col_to_lrgb(x)		(x)
	#define make_colour_srgb	make_colour_srgb_l
	#define make_grey		make_grey_l
	#define make_colour_hsl		make_colour_hsl_l
	#define	make_colour_hsl_cw	make_colour_hsl_cw_l
	#define get_rgb_channel		get_lrgb_channel
	#define set_rgb_channel		set_lrgb_channel
	#define col_to_rgb		lrgb_to_rgb
	#define col_to_hsl		lrgb_to_hsl
#endif

extern lrgb_t make_colour_lin(double r, double g, double b, double a);
extern frgb_t make_colour_frgb(double r, double g, double b, double a);
extern frgb_t lrgb_to_frgb(lrgb_t cl);
extern lrgb_t frgb_to_lrgb(frgb_t cf);
extern lrgb_t make_colour_srgb_l(int r, int g, int b, int a);
extern frgb_t make_colour_srgb_f(int r, int g, int b, int a);
extern lrgb_t make_grey_l(double v);
extern frgb_t make_grey_f(double v);
extern double frgb_to_grey_level(frgb_t p);
extern double Lab_L_to_linear(double t);
extern double linear_to_Lab_L(double t);
extern double Lab_L_invert(double x);
extern void rgb_to_hsl_cw(double Wr, double Wg, double Wb, double r, double g, double b, double *H, double *S, double *L, int huemode);
extern void rgb_to_hsl(double r, double g, double b, double *H, double *S, double *L, int huemode);
extern void hsl_to_rgb_cw(double Wr, double Wg, double Wb, double H, double S, double L, double *r, double *g, double *b, int huemode, int secboost);
extern void hsl_to_rgb(double H, double S, double L, double *r, double *g, double *b, int huemode, int secboost);
extern frgb_t hsl_to_frgb(double H, double S, double L, int huemode, int secboost);
extern lrgb_t make_colour_hsl_l(double H, double S, double L, int huemode, int secboost);
extern frgb_t make_colour_hsl_f(double H, double S, double L, int huemode, int secboost);
extern lrgb_t make_colour_hsl_cw_l(double Wr, double Wg, double Wb, double H, double S, double L, int huemode, int secboost);
extern frgb_t make_colour_hsl_cw_f(double Wr, double Wg, double Wb, double H, double S, double L, int huemode, int secboost);
extern double get_lrgb_channel(lrgb_t col, int ch);
extern double get_frgb_channel(frgb_t col, int ch);
extern void set_lrgb_channel(lrgb_t *col, int ch, double value);
extern void set_frgb_channel(frgb_t *col, int ch, double value);
extern void lrgb_to_rgb(lrgb_t col, double *r, double *g, double *b);
extern void frgb_to_rgb(frgb_t col, double *r, double *g, double *b);
extern xyz_t col_to_xyz(col_t col);
extern col_t xyz_to_col(xyz_t v);
extern void lrgb_to_hsl(lrgb_t col, double *H, double *S, double *L, int huemode);
extern void frgb_to_hsl(frgb_t col, double *H, double *S, double *L, int huemode);
extern void colour_blowout_double_cw(double Wr, double Wg, double Wb, double *pred, double *pgrn, double *pblu);
extern void colour_blowout_double(double *pred, double *pgrn, double *pblu);
extern void colour_blowout_int_cw(uint32_t Wr, uint32_t Wg, uint32_t Wb, uint32_t *pred, uint32_t *pgrn, uint32_t *pblu);
extern void colour_blowout_int(uint32_t *pred, uint32_t *pgrn, uint32_t *pblu);
extern void rangelimit_frgb(frgb_t *c);
extern col_t get_colour_seq(double x, xyz_t freq, xyz_t phase);
extern col_t colour_mul(col_t col, double m);
extern col_t adjust_colour_lum(col_t col, double target_lum);
