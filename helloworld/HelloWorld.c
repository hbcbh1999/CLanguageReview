#include <linux/module.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");

static int __init moduletest_init(void)
{
    printk(KERN_ALERT "Hello,World");
    return 0;
}

static void __exit moduletest_exit(void)
{
    printk(KERN_ALERT "Goodbye,World!");
}

module_init(moduletest_init);
module_exit(moduletest_exit);
