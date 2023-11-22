#include <linux/init.h>
#include <linux/module.h>

static char *device_type = "keyboard";

MODULE_LICENSE("GPL");
MODULE_AUTHOR("reruo");
MODULE_DESCRIPTION("My First Simple Linux Device Driver - Virtual Keyboard");

module_param(device_type, charp, S_IRUGO);
MODULE_PARM_DESC(device_type, "My Virtual Keyboard");

// Step 1: Module Initialization
static int __init my_virtual_device_init(){
        if(strcmp(device_type, "keyboard") != 0){
                pr_err("ERROR! Unknown device type: %s", device_type);
                return -EINVAL;
        }

        // Perform device initialization here
        // Register the device, perform memory allocations, etc.
	pr_info("Hello, reruo virtual keyboard module!\n");
        return 0;
}

module_init(my_virtual_device_init);

// Step 16: Cleanup and Exit
static void __exit my_virtual_device_exit(void) {
	pr_info("Exiting reruo virtual keyboard module.\n");
}

module_exit(my_virtual_device_exit);

