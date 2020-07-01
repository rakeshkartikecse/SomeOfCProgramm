#include<stdio.h>

int *functions();
int main()
{
auto int *x;
int (*ptr)();
ptr=&functions;
x=(*ptr)();
printf("%d",*x);
return 0;

}

int *functions()
{

static int a=10;
return &a;
}
