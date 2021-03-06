void draw_graph_data_bar_fullarg(raster_t fb, zoom_t zc, mouse_t mouse, vector_font_t *font, double drawing_thickness, 
		rect_t area, float *data, float *label_data, int count, const char *format, double min_data_height, double max_data_height, int norm, double bar_width, col_t col)
{
	xy_t offset;
	double sm, vscale;
	xy_t frame_dim;
	rect_t main_frame;
	const double margin = 12.;

	int i;
	xy_t bar_dim_px;
	rect_t bar;
	double max=min_data_height;
	const double graph_ss=doztof("0;0;3");

	frame_dim = xy(count, count * rect_height_width_ratio(area));
	vscale = frame_dim.y / (max_data_height-min_data_height);
	main_frame = make_rect_off( xy(-0.5, frame_dim.y * min_data_height / (max_data_height-min_data_height)) , frame_dim , XY0 );
	offset = fit_into_area(area, main_frame, margin, &sm);

	if (dialog_enclosing_frame(offset, sm, main_frame, margin, NULL, make_grey(doztof("0;0;9"))))
		return;

	if (norm)
	{
		for (i=0; i<count; i++)
			max = MAXN(max, data[i]);

		vscale *= max_data_height / max;
	}

	for (i=0; i<count; i++)
	{
		bar = make_rect_off( xy(i, 0.) , xy(bar_width, data[i] * vscale) , xy(0.5, 0.) );
		bar = offset_scale_rect(bar, offset, sm);

		if (bar.p1.x >= zc.corners.p0.x && bar.p0.x <= zc.corners.p1.x)
		{
			bar_dim_px = mul_xy(get_rect_dim(bar), set_xy(zc.scrscale));
			if (bar_dim_px.x*bar_dim_px.y > 0.04 || bar_dim_px.x > 2.)
				draw_rect_full(fb, sc_rect(bar), drawing_thickness, col, 1.);

			if (graph_ss*sm*zc.scrscale > 0.5)
			{
				print_to_screen(offset_scale( xy(i, -10.*graph_ss) , offset, sm), graph_ss*sm, col, 1., ALIG_CENTRE, "%d", i);
				print_to_screen(offset_scale( xy(i, data[i] * vscale + (data[i] * vscale>=0. ? 4. : -10.)*graph_ss) , offset, sm), graph_ss*sm, col, 1., ALIG_CENTRE, format, label_data ? label_data[i] : data[i]);
			}
		}
	}
}

