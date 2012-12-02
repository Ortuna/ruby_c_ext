#include "helloworld.h"

// #define GetDBM(obj, helloworldp) {\
//     Data_Get_Struct(obj, struct helloworlddata, helloworldp);\
//     if (helloworldp->di_helloworld == 0) closed_dbm();\
// }

// struct helloworlddata {
//     int  di_size;
//     Helloworld *di_helloworld;
// };
static VALUE cHelloworld;
static ID id_helloworld;

static VALUE helloworld_print(VALUE obj, VALUE keystr);

void Init_helloworld(void)
{
    /* define Helloworld class */
    cHelloworld = rb_define_class("Helloworld", rb_cObject);

    /* Helloworld has class method print(): arguments are received as C array */
    rb_define_singleton_method(cHelloworld, "print", helloworld_print, -1);

    /* ID for a instance variable to store Helloworld data */
    id_helloworld = rb_intern("Helloworld");
}

static VALUE helloworld_print(VALUE obj, VALUE keystr)
{
	char *string = "test";

	return rb_str_new(string, strlen(string));
}
