#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");

int iValue = 0;
MODULE_PARM(iValue, "i");
MODULE_PARM_DESC(iValue,"this is an int value");

int init_module(void){
	printk("Hello world\n");
	return 0;
}

void cleanup_module(void){
	printk("goodbye cruel world\n");
}