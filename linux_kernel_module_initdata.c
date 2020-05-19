// kernel module with __init, __exit and __initdata
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

static int init_data __initdata = 3;
static int __init kernel_hello_init(void) {
  printk(KERN_INFO "Hello, world %d\n", init_data);
  return 0;
}
static void __exit kernel_hello_exit(void) {
  printk(KERN_INFO "Goodbye, world 3\n");
}
module_init(kernel_hello_init);
module_exit(kernel_hello_exit);