#include <stdio.h>
void main()
{
    int n=1;
    up:
    printf("\nhello prints %d times:",n);
    n++;
    if(n==6)
    {
        goto down;
    }
    goto up;
     down :
    return 0;
}