#include<stdio.h>
void main()
{
	int n,r,m=n,sum=0,rv;
	printf("enter the integer:");
	scanf("%d",&n);
	{r=n%10;
	for(;n!=0;n=n/10)
	rv=rv*10+r;
	}
  printf("%d",rv);
switch(rv)
{  case 'm': printf("\nis palindrome");
            break;
   default:printf("\nis not palindrome");
}
}
