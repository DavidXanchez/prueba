#include <linux/init.h>
#include <linux/module.h>
MODULE_LICENSE("Dual BSD/GPL");
static int hello_init(void)
{
printk(KERN_ALERT "Es dificil leer estos archivos\n");
return 0;
}
static void hello_exit(void)
{
printk(KERN_ALERT "Muchas gracias y hasta luego\n");
}
module_init(hello_init);
module_exit(hello_exit);
