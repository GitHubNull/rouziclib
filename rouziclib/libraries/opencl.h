// in libraries/opencl_struct.h:
// clctx_t

#ifdef RL_OPENCL

extern const char *get_cl_error_string(cl_int err);
extern void check_compilation_log(clctx_t *c, cl_program program);
extern cl_int init_cl_context_from_gl(clctx_t *c, cl_platform_id platform);
extern cl_int init_cl_context(clctx_t *c, const int from_gl);
extern void deinit_clctx(clctx_t *c);
extern cl_int build_cl_program(clctx_t *c, cl_program *program, const char *src);
extern cl_int build_cl_program_from_file(clctx_t *c, cl_program *program, char *cl_src_path);
extern cl_int create_cl_kernel(clctx_t *c, cl_program program, cl_kernel *kernel, const char *name);
extern cl_int zero_cl_mem(clctx_t *c, cl_mem buffer, size_t size);
extern cl_int init_raster_cl(void *fb, const clctx_t *clctx);
//extern uint64_t get_clmem_device_address(clctx_t *clctx, cl_mem buf);
extern void make_gl_tex(raster_t *fb);
extern cl_int init_fb_cl(raster_t *fb);

#define CL_ERR_RET(name, ret)	if (ret != CL_SUCCESS) { fprintf_rl(stderr, "%s failed (%s)\n", name, get_cl_error_string(ret));	return ret; }
#define CL_ERR_NORET(name, ret)	if (ret != CL_SUCCESS) { fprintf_rl(stderr, "%s failed (%s)\n", name, get_cl_error_string(ret));	return ; }

#endif
