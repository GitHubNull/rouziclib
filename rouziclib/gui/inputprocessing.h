// in gui/inputprocessing_struct.h:
// ctrl_button_state_t, ctrl_knob_state_t, ctrl_drag_state_t, ctrl_id_t

extern int equal_ctrl_id(ctrl_id_t a, ctrl_id_t b);
//extern int check_ctrl_id(rect_t box, mouse_t mouse);
extern void proc_mouse_rect_ctrl_button(int mb, ctrl_button_state_t *state, int orig_point_within_box);
extern ctrl_button_state_t *proc_mouse_rect_ctrl_lrmb(rect_t box, mouse_t mouse);
extern ctrl_button_state_t proc_mouse_rect_ctrl(rect_t box, mouse_t mouse);
extern ctrl_knob_state_t proc_mouse_knob_ctrl(rect_t box, mouse_t mouse);
extern void proc_mouse_draggable_ctrl(ctrl_drag_state_t *state, rect_t box, mouse_t mouse);
