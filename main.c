include <linux/init.h>
#include <linux/module.h>

static char *device_type = "keyboard";

// Information about the Module
// Use tools like lsmod and modinfo to see module information.
MODULE_LICENSE("GPL");
MODULE_AUTHOR("reruo");
MODULE_DESCRIPTION("My First Simple Linux Device Driver - Virtual Keyboard");


module_param(device_type, charp, S_IRUGO);
MODULE_PARM_DESC(device_type, "My Virtual Keyboard");

static int __init my_virtual_device_init(){
        if(strcmp(device_type, "keyboard") == 0){

        }
        else{
                pr_err("ERROR! Unknown device type: %s", device_type);
                return -EINVAL;
        }

        return 0;
}

// Cleanup and exit
static void __exit my_virtual_device_exit(void) {
    
}

module_init(my_virtual_device_init);
module_exit(my_virtual_device_exit);