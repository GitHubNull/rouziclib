int8_t get_state_checkbox_array(int8_t *array, int len)
{
	int i;
	int8_t state;

	if (len < 1)
		return 0;

	state = array[0];

	for (i=1; i<len; i++)
	{
		if (array[i] != state)
			return 2;
	}

	return state;
}

int ctrl_array_checkbox_fullarg(raster_t fb, zoom_t zc, mouse_t mouse, vector_font_t *font, double drawing_thickness, 
		int8_t *array, int count, char **label, col_t *col, int col_count, rect_t box, xy_t pos_inc)
{
	int i, change=0;

	for (i=0; i<count; i++)
	{
		change |= ctrl_checkbox(&array[i], label[i], box, col[i%col_count]);
		box = add_rect_xy(box, pos_inc);
	}

	return change;
}

int ctrl_array_checkbox_with_all_fullarg(raster_t fb, zoom_t zc, mouse_t mouse, vector_font_t *font, double drawing_thickness, 
		int8_t *array, int count, char *all_label, col_t all_col, char **label, col_t *col, int col_count, rect_t box, xy_t pos_inc)
{
	int8_t status_all;

	status_all = get_state_checkbox_array(array, count);
	if (ctrl_checkbox(&status_all, all_label, box, all_col))
		memset(array, status_all, count);

	box = add_rect_xy(box, pos_inc);
	return ctrl_array_checkbox(array, count, label, col, col_count, box, pos_inc);
}

int ctrl_array_radio_fullarg(raster_t fb, zoom_t zc, mouse_t mouse, vector_font_t *font, double drawing_thickness, 
		int *sel, int count, char **label, col_t *col, int col_count, rect_t box, xy_t pos_inc)
{
	int i, change=0;

	for (i=0; i<count; i++)
	{
		if (ctrl_radio(i==*sel, label[i], box, col[i%col_count]))
		{
			*sel = i;
			change = 1;
		}

		box = add_rect_xy(box, pos_inc);
	}

	return change;
}

int ctrl_checkbox_subknob_fullarg(raster_t fb, zoom_t zc, mouse_t mouse, vector_font_t *font, double drawing_thickness, 
		double *v_orig, double step, double ctrl_num, double subknob_num, knob_t knob, rect_t topbox, col_t colour)
{
	rect_t box;

	box = make_rect_off( xy(topbox.p0.x + doztof("0;8;6")*step, topbox.p1.y - doztof("0;2")*step - ctrl_num*step - subknob_num*doztof("0;2;3")*step), set_xy(doztof("0;1;6")*step), xy(0., 1.) );

	return ctrl_knob(v_orig, knob, box, colour);
}

int ctrl_array_knob_fullarg(raster_t fb, zoom_t zc, mouse_t mouse, vector_font_t *font, double drawing_thickness, 
		double *knob_value, knob_t *knob_data, int count, col_t *col, int col_count, rect_t box, xy_t pos_inc)
{
	int i, change=0;

	for (i=0; i<count; i++)
	{
		change |= ctrl_knob(&knob_value[i], knob_data[i], box, col[i%col_count]);
		box = add_rect_xy(box, pos_inc);
	}

	return change;
}