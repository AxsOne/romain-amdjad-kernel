#include "hello.h"

MODULE_LICENSE("IDK");
MODULE_DESCRIPTION("My firt kernel module");
MODULE_AUTHOR("You");
static char *str = NULL;
static int n = 0;

static int my_dev_open(struct inode *inode, struct file *file)
{
    printk("device is open\n");
    return 0;
}

static int my_dev_close(struct inode *inode, struct file *file)
{
    printk("device is close\n");
    return 0;
}

static ssize_t my_dev_read(struct file *file, char *buf, size_t len, loff_t *off)
{
    printk("device is open\n");
    return 0;
}

static ssize_t my_dev_write(struct file *file, const char *buf, size_t len, loff_t *off)
{
    return 0;
}

static int __init my_init(void)
{
    int i;
    for (i = 0; i < n; i++)
        printk("Hello: %s\n", str);
    register_chrdev(0, "lolmaismieux", &fops)#include "hello.h"

MODULE_LICENSE("IDK");
MODULE_DESCRIPTION("My firt kernel module");
MODULE_AUTHOR("You");
static char *str = NULL;
static int n = 0;

static int my_dev_open(struct inode *inode, struct file *file)
{
    printk("device is open\n");
    return 0;
}

static int my_dev_close(struct inode *inode, struct file *file)
{
    printk("device is close\n");
    return 0;
}

static ssize_t my_dev_read(struct file *file, char *buf, size_t len, loff_t *off)
{
    printk("device is open\n");
    return 0;
}

static ssize_t my_dev_write(struct file *file, const char *buf, size_t len, loff_t *off)
{
    return 0;
}

static int __init my_init(void)
{
    int i;
    for (i = 0; i < n; i++)
        printk("Hello: %s\n", str);
    register_chrdev(0, "lolmaismieux", &fops);
    return 0;
}

static void __exit my_exit(void)
{
    int i;
    for (i = 0; i < n; i++)
        printk("Goodbye: %s\n", str);
}

module_init(my_init);
module_exit(my_exit);;
    return 0;
}

static void __exit my_exit(void)
{
    int i;
    for (i = 0; i < n; i++)
        printk("Goodbye: %s\n", str);
}

module_init(my_init);
module_exit(my_exit);