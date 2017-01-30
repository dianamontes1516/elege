#include <linux/module.h>/* Necesario en todos los modulos */
#include <linux/kernel.h> /* Necesario para alertas e info como KERN_INFO */
#include <linux/init.h> /* Necesario para las macros init y exit */

MODULE_LICENSE("GLP");
MODULE_AUTHOR("DM_OA");
MODULE_DESCRIPTION("Un hellow world muy fancy");

/**__init es una macro que se sustituye por _init_() */
static int __init inicio(void)
{
  printk(KERN_CRIT "Hello, Mundo \n");
  return 0;
}

/**__exit es una macro que se sustituye por _exit_() */
static void __exit fin(void)
{
  printk(KERN_CRIT "Adios, Mundo \n");
}
module_init(inicio);
module_exit(fin);
