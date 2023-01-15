void f(void)
{
    int num;
}

// num : time of allocation: dynamic
// allocation policy: per function call
// storage class: auto
// Storage section: stack frame of funtion
// lifetime: lifetime of function

void f(void)
{
    static int num;
}

// num: time of allocation: static
// allocation policy: one time
// storage Section: Data or bss
// lifetime: lifetime of process