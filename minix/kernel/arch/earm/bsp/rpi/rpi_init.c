#include <sys/types.h>
#include "bsp_init.h"
#include "bsp_padconf.h"
#include "bsp_reset.h"

void
bsp_init()
{
	/* map memory for padconf */
	bsp_padconf_init();

	/* map memory for reset control */
	bsp_reset_init();

	/* disable watchdog */
	bsp_disable_watchdog();
}
