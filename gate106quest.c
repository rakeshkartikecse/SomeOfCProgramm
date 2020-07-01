#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int fun(int n);




int main()
{
int n=5;
printf("The value printed will be %d",fun(n));
return 0;
}


int fun(int n)

{
int x=1,k;
if(n==1)return x;
for(k=1;k<n;++k)
   x=x+fun(k)*fun(n-k);
return x;

}

