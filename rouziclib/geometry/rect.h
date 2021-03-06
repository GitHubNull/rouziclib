// in geometry/rect_struct.h:
// rect_t, recti_t

extern rect_t rect(xy_t p0, xy_t p1);
extern recti_t recti(xyi_t p0, xyi_t p1);
extern recti_t rect_to_recti(rect_t r);
extern rect_t recti_to_rect(recti_t ri);
extern xy_t rect_p01(rect_t r);
extern xy_t rect_p10(rect_t r);
extern xyi_t recti_p01(recti_t r);
extern xyi_t recti_p10(recti_t r);
extern rect_t mul_rect(rect_t r, xy_t m);
extern recti_t rshift_recti(recti_t r, int sh);
extern rect_t make_rect_centred(xy_t c, xy_t wh);
extern rect_t make_rect_off(xy_t c, xy_t wh, xy_t off);
extern xy_t get_rect_centre(rect_t r);
extern xyi_t get_recti_centre(recti_t r);
extern xy_t get_rect_dim(rect_t r);
extern xyi_t get_recti_dim(recti_t r);
extern double get_rect_area(rect_t r);
extern rect_t get_rect_centred_coord(rect_t r);
extern recti_t get_recti_centred_coord(recti_t r);
extern recti_t recti_add_margin(recti_t r, xyi_t margin);
extern rect_t rect_size_mul(rect_t r, xy_t scale);
extern rect_t rect_add_margin(rect_t r, xy_t margin);
extern rect_t make_rect_ulcorner(xy_t ulc, xy_t wh);
extern rect_t make_rect_urcorner(xy_t ulc, xy_t wh);
extern double rect_min_side(rect_t r);
extern double rect_max_side(rect_t r);
extern double rect_height_width_ratio(rect_t r);
extern rect_t sort_rect(rect_t r);
extern recti_t sort_recti(recti_t r);
extern rect_t add_rect_xy(rect_t r, xy_t a);
extern int equal_rect(rect_t r1, rect_t r2);
