MAIN		= ss

OTHERS		= 

include sdcc.mk

CPPFLAGS	= -DDEVICE=DEV_STM8S105
#-DUSART=USART2