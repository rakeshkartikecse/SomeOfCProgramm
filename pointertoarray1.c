#include<stdio.h>

int main()
{
int a[5]={10,20,30,40,50};
int *ptr;
ptr=a;
printf("\n");
/*printf("%d %d %d %d",a[2],*(a+2),*(2+a),2[a]);
++ptr;
++ptr;
--*ptr;
printf("\nO%p",ptr);
printf("\n %p",a);*/
printf("%p",a+1);
printf("\n");
printf("%p",*&a);
printf("\n");
printf("%d",a[0]);
printf("\n");
printf("%d",*a);
printf("\n");
printf("\n");
printf("\n");
printf("\n");
return 0;
}
