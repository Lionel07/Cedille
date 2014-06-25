#include <logging.h>
#include <cedille.h>
#include <console.h>
#include <stdio.h>
extern uint32_t _kernel_start,_kernel_end;

void kernel_entry()
{
	console_init();
	console_printdiv();
	printk("status","Kernel initialising...\n");
	printk("ok","The Cedille Microkernel v.%s. (c) Corwin McKnight 2014\n",CEDILLE_VERSION_S);
	printk("device","Logging on UART0\n");
	#ifdef DEBUG
	printk("debug","kernel image(ram): 0x%X - 0x%X (", &_kernel_start,&_kernel_end, &_kernel_end - &_kernel_start);
	logging_printbestunit(&_kernel_end - &_kernel_start, 0); printf(")\n");
	#endif
	printk("cpu","Running on Integrator-CP (ARM926EJ-S)\n");
	printk("status","Initialising the processor...\n");
}