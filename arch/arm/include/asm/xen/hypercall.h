#include <xen/arm/hypercall.h>

#ifdef CONFIG_RTK_XEN_HYPERCALL
int HYPERVISOR_rtk_hypercall_op(unsigned int cmd, void *arg);
#endif
