enum
{
	FULLCIRCLE,
	HOLLOWCIRCLE,
};

extern void draw_circle_lrgb(const int circlemode, raster_t fb, xy_t pos, double circrad, double radius, lrgb_t colour, const blend_func_t bf, double intensity);
extern void draw_circle_cl(const int circlemode, raster_t fb, xy_t pos, double circrad, double radius, frgb_t colour, const blend_func_fl_t bf, double intensity);
extern void draw_circle(const int circlemode, raster_t fb, xy_t pos, double circrad, double radius, col_t colour, const blend_func_t bf, double intensity);
extern void draw_circle_with_lines(raster_t fb, xy_t pos, double circrad, double radius, col_t colour, const blend_func_t bf, double intensity);
extern void draw_rect(raster_t fb, rect_t r, double radius, col_t colour, const blend_func_t bf, double intensity);
extern void draw_rect_chamfer(raster_t fb, rect_t r, double radius, col_t colour, const blend_func_t bf, double intensity, double chamfer);
extern void draw_line_dashed(raster_t fb, xy_t p1, xy_t p2, double dash_period, double dash_ratio, double phase, double radius, col_t colour, const blend_func_t bf, double intensity);
extern int32_t get_dist_to_roundrect(int32_t lx1, int32_t ly1, int32_t lx2, int32_t ly2, int32_t corner, int32_t ixf, int32_t iyf);
extern void draw_roundrect(raster_t fb, rect_t box, double corner, double radius, lrgb_t colour, const blend_func_t bf, double intensity);
extern void draw_roundrect_frame(raster_t fb, rect_t box1, rect_t box2, double corner1, double corner2, double radius, lrgb_t colour, const blend_func_t bf, double intensity);
extern void draw_polar_glow(raster_t fb, double cx, double cy, lrgb_t col, double colmul, double scale, double rad, double gradr, double gradth, double angle, int32_t islog, int32_t riserf, double erfrad, double pixoffset);
extern void draw_gaussian_gradient(raster_t fb, double cx, double cy, lrgb_t c0, lrgb_t c1, double gausrad, double gausoffx, double gausoffy, const blend_func_t bf);
extern void draw_point_lrgb(raster_t fb, xy_t pos, double radius, lrgb_t colour, const blend_func_t bf, double intensity);
extern void draw_point_frgb(raster_t fb, xy_t pos, double radius, frgb_t colour, const blend_func_fl_t bf, double intensity);
extern void draw_point_cl(raster_t fb, xy_t pos, double radius, frgb_t colour, const blend_func_fl_t bf, double intensity);
extern void draw_point(raster_t fb, xy_t pos, double radius, col_t colour, const blend_func_t bf, double intensity);
extern void draw_point_on_row(raster_t fb, xy_t pos, double radius, lrgb_t colour, const blend_func_t bf, double intensity);
