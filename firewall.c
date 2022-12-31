/*
 * 
 * This Kernel module is a basic firewall implmention.
 * The module will handle packets according to a configuration file. 
 */
#define pr_fmt(fmt) "%s:%s(): " fmt, KBUILD_MODNAME, __func__

#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

#define MODNAME   "PacketSaver"

MODULE_AUTHOR("Boaz Tene");
MODULE_DESCRIPTION("Kernel based firewall");
MODULE_LICENSE("Dual MIT/GPL");
MODULE_VERSION("0.1");

static int __init packet_saver_init(void)
{
	pr_info("inserted\n");
	return 0;
}

static void __exit packet_saver_exit(void)
{
	pr_info("removed\n");
}

module_init(packet_saver_init);
module_exit(packet_saver_exit);
