#ifndef CEDILLE_KCONFIG_H
#define CEDILLE_KCONFIG_H

//Some logic here, please ignore it
#ifndef DEBUG
	#define CONFIG_DEBUG_ONLY_LOG return;
#else
	#define CONFIG_DEBUG_ONLY_LOG
#endif

//KERNEL
#define CONFIG_KERNEL_VERSION_S "0.0.0.8"
#define CONFIG_KERNEL_TYPE_S "git"

//TEXT CONSOLE
#define CONFIG_TEXTCONSOLE_FB_MX 80
#define CONFIG_TEXTCONSOLE_FB_MY 25
#define CONFIG_TEXTCONSOLE_FB_SCREENS 4

//STACK GUARD
#define CONFIG_SSP_GUARD_VAL 0xe2d00396

//KERNEL PROCESSES
#define CONFIG_KPROCESS_MAX 10

//PMM
#define CONFIG_PMM_DEFAULT_MAXMEM 0x1000000

#endif