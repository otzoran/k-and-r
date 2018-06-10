// run it in https://www.onlinegdb.com/online_c_compiler

#include <stdio.h>

int main()
{
    int     ii, maxint;
    
    ii = sizeof(int) * 8;
    // note that if you remove the last - 1 you get "maxint is -2147483648"
    maxint = (1 << (ii - 1)) - 1;       // operator '<<' is shift-left, expect 2,147,483,647
    printf("int is %d bits, maxint is %d\n", ii, maxint);

    return 0;
}
