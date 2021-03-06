// in general/xyz_struct.h:
// xy_t, xyi_t, xyz_t, matrix_t

#define XY0	xy(0.,0.)
#define XYZ0	xyz(0.,0.,0.)
#define zyx(z, y, x)	xyz(x, y, z)

extern xy_t xy(double x, double y);
extern xyi_t xyi(int32_t x, int32_t y);
extern xyz_t xyz(double x, double y, double z);
extern xy_t xyz_to_xy(xyz_t in);
extern xyz_t xy_to_xyz(xy_t in);
extern xy_t xyi_to_xy(xyi_t in);
extern xyi_t xy_to_xyi(xy_t in);
extern xy_t set_xy(double v);
extern xyz_t set_xyz(double v);
extern xyi_t set_xyi(int32_t v);

extern int equal_xy(xy_t a, xy_t b);
extern int equal_xyz(xyz_t a, xyz_t b);
extern int equal_xyi(xyi_t a, xyi_t b);
extern xy_t add_xy(xy_t a, xy_t b);
extern xyz_t add_xyz(xyz_t a, xyz_t b);
extern xyi_t add_xyi(xyi_t a, xyi_t b);
extern xy_t sub_xy(xy_t a, xy_t b);
extern xyz_t sub_xyz(xyz_t a, xyz_t b);
extern xyi_t sub_xyi(xyi_t a, xyi_t b);
extern xy_t mul_xy(xy_t a, xy_t b);
extern xyz_t mul_xyz(xyz_t a, xyz_t b);
extern xyi_t mul_xyi(xyi_t a, xyi_t b);
extern xy_t div_xy(xy_t a, xy_t b);
extern xy_t div_xy_0(xy_t a, xy_t b);
extern xyz_t div_xyz(xyz_t a, xyz_t b);
extern xyi_t div_xyi(xyi_t a, xyi_t b);
extern xy_t neg_xy(xy_t a);
extern xyz_t neg_xyz(xyz_t a);
extern xyi_t neg_xyi(xyi_t a);
extern xy_t inv_xy(xy_t a);
extern xyz_t inv_xyz(xyz_t a);
extern xyi_t inv_xyi(xyi_t a);
extern xy_t neg_x(xy_t a);
extern xy_t neg_y(xy_t a);

#define abs_xy(a)	func1_xy(a, fabs)
#define abs_xyz(a)	func1_xyz(a, fabs)
#define cos_xy(a)	func1_xy(a, cos)
#define cos_xyz(a)	func1_xyz(a, cos)
#define sin_xy(a)	func1_xy(a, sin)
#define sin_xyz(a)	func1_xyz(a, sin)
#define floor_xy(a)	func1_xy(a, floor)
#define ceil_xy(a)	func1_xy(a, ceil)
extern xy_t func1_xy(xy_t a, double (*f)(double));
extern xyz_t func1_xyz(xyz_t a, double (*f)(double));
extern xyi_t func1_xyi(xyi_t a, double (*f)(double));

#define fmod_xy(a, b)	func2_xy(a, b, fmod)
extern xy_t func2_xy(xy_t a, xy_t b, double (*f)(double,double));
extern xyz_t func2_xyz(xyz_t a, xyz_t b, double (*f)(double,double));
extern xyi_t func2_xyi(xyi_t a, xyi_t b, double (*f)(double,double));

extern xyi_t rshift_xyi(xyi_t a, int sh);

extern xy_t min_xy(xy_t a, xy_t b);
extern xyz_t min_xyz(xyz_t a, xyz_t b);
extern xyi_t min_xyi(xyi_t a, xyi_t b);
extern xy_t max_xy(xy_t a, xy_t b);
extern xyz_t max_xyz(xyz_t a, xyz_t b);
extern xyi_t max_xyi(xyi_t a, xyi_t b);
extern void minmax_xy(xy_t *a, xy_t *b);
extern void minmax_xyz(xyz_t *a, xyz_t *b);
extern void minmax_xyi(xyi_t *a, xyi_t *b);
extern double min_of_xy(xy_t a);
extern double max_of_xy(xy_t a);
extern double min_of_xyz(xyz_t a);
extern double max_of_xyz(xyz_t a);
extern xy_t rangelimit_xy(xy_t v, xy_t l0, xy_t l1);
extern xyz_t rangelimit_xyz(xyz_t v, xyz_t l0, xyz_t l1);
extern xyi_t rangelimit_xyi(xyi_t v, xyi_t l0, xyi_t l1);

extern xy_t fma_xy(xy_t pos, xy_t tmul, xy_t tadd);
extern double get_xyz_index(xyz_t v, const int index);
extern matrix_t matrix_xyz(xyz_t x, xyz_t y, xyz_t z);
extern matrix_t matrices_mul(matrix_t a, matrix_t b);
extern xyz_t matrix_mul(xyz_t v, matrix_t m);
