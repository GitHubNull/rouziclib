rect_t rect(xy_t p0, xy_t p1)
{
	rect_t r;

	r.p0 = p0;
	r.p1 = p1;

	return r;
}

recti_t recti(xyi_t p0, xyi_t p1)
{
	recti_t r;

	r.p0 = p0;
	r.p1 = p1;

	return r;
}

recti_t rect_to_recti(rect_t r)
{
	return recti(xy_to_xyi(r.p0), xy_to_xyi(r.p1));
}

rect_t recti_to_rect(recti_t ri)
{
	return rect(xyi_to_xy(ri.p0), xyi_to_xy(ri.p1));
}

xy_t rect_p01(rect_t r)
{
	return xy(r.p0.x, r.p1.y);
}

xy_t rect_p10(rect_t r)
{
	return xy(r.p1.x, r.p0.y);
}

xyi_t recti_p01(recti_t r)
{
	return xyi(r.p0.x, r.p1.y);
}

xyi_t recti_p10(recti_t r)
{
	return xyi(r.p1.x, r.p0.y);
}

rect_t mul_rect(rect_t r, xy_t m)
{
	return rect(mul_xy(r.p0, m), mul_xy(r.p1, m));
}

recti_t rshift_recti(recti_t r, int sh)
{
	return recti( rshift_xyi(r.p0, sh), rshift_xyi(r.p1, sh) );
}

xy_t get_rect_centre(rect_t r)
{
	return mul_xy(set_xy(0.5), add_xy(r.p0, r.p1));
}

xyi_t get_recti_centre(recti_t r)
{
	return rshift_xyi(add_xyi(r.p0, r.p1), 1);
}

xy_t get_rect_dim(rect_t r)
{
	return abs_xy(sub_xy(r.p1, r.p0));
}

xyi_t get_recti_dim(recti_t r)		// assuming that r represents a grid defined by its lowest (r.p0) and highest (r.p1) indices
{
	return add_xyi(set_xyi(1), sub_xyi(r.p1, r.p0));
}

double get_rect_area(rect_t r)
{
	xy_t dim = get_rect_dim(r);
	return dim.x * dim.y;
}

rect_t get_rect_centred_coord(rect_t r)		// get a centre coord and width/height from a rect
{
	return rect( get_rect_centre(r) , get_rect_dim(r) );
}

recti_t get_recti_centred_coord(recti_t r)		// get a centre coord and width/height from a recti
{
	return recti( get_recti_centre(r) , get_recti_dim(r) );
}

rect_t make_rect_centred(xy_t c, xy_t wh)	// make rect from a centre coord and width/height
{
	return rect(sub_xy(c, mul_xy(set_xy(0.5), wh)), add_xy(c, mul_xy(set_xy(0.5), wh)));
}

rect_t make_rect_off(xy_t c, xy_t wh, xy_t off)
{
	return rect(sub_xy(c, mul_xy(off, wh)), add_xy(c, mul_xy(sub_xy(set_xy(1.), off), wh)));
}

rect_t rect_size_mul(rect_t r, xy_t scale)
{
	r = get_rect_centred_coord(r);
	r.p1 = mul_xy(r.p1, scale);
	return make_rect_centred(r.p0, r.p1);
}

rect_t rect_add_margin(rect_t r, xy_t margin)
{
	r = get_rect_centred_coord(r);
	r.p1 = add_xy(r.p1, mul_xy(set_xy(2.), margin));
	return make_rect_centred(r.p0, r.p1);
}

recti_t recti_add_margin(recti_t r, xyi_t margin)
{
	r.p0 = sub_xyi(r.p0, margin);
	r.p1 = add_xyi(r.p1, margin);

	return r;
}

rect_t make_rect_ulcorner(xy_t ulc, xy_t wh)
{
	return sort_rect(rect( ulc, add_xy(ulc, neg_y(abs_xy(wh))) ));
}

rect_t make_rect_urcorner(xy_t ulc, xy_t wh)
{
	return sort_rect(rect( ulc, add_xy(ulc, neg_xy(abs_xy(wh))) ));
}

double rect_min_side(rect_t r)
{
	return min_of_xy(get_rect_dim(r));
}

double rect_max_side(rect_t r)
{
	return max_of_xy(get_rect_dim(r));
}

double rect_height_width_ratio(rect_t r)
{
	xy_t dim = get_rect_dim(r);

	return dim.y/dim.x;
}

rect_t sort_rect(rect_t r)
{
	minmax_xy(&r.p0, &r.p1);
	return r;
}

recti_t sort_recti(recti_t r)
{
	minmax_xyi(&r.p0, &r.p1);
	return r;
}

rect_t add_rect_xy(rect_t r, xy_t a)
{
	return rect(add_xy(r.p0, a), add_xy(r.p1, a));
}

int equal_rect(rect_t r1, rect_t r2)
{
	r1 = sort_rect(r1);
	r2 = sort_rect(r2);

	return equal_xy(r1.p0, r2.p0) && equal_xy(r1.p1, r2.p1);
}
