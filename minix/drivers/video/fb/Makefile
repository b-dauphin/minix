# Makefile for the framebuffer driver.
PROG=	fb

.include "arch/${MACHINE_ARCH}/Makefile.inc"

SRCS+=	fb_edid.c fb.c

# re-use EDID parsing/validation code from NetBSD.
.PATH: ${NETBSDSRCDIR}/sys/dev/videomode
SRCS+=	edid.c pickmode.c videomode.c vesagtf.c

# Put this dir and the EDID headers (dev/videomode/*.h) in the search path.
CPPFLAGS+= -I${.CURDIR} -I${NETBSDSRCDIR}/sys -g -O0

DPADD+=	${LIBCHARDRIVER} ${LIBSYS}
LDADD+=	-lchardriver -lsys  -Ttext 0x6000000

.include <minix.service.mk>
