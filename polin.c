#include<stdio.h>
void main()
{
	int n,r,m=n,sum=0,rv;
	printf("enter the integer:");
	scanf("%d",&n);
	for(;n!=0;n=n/10)
	{r=n%10;
	rv=rv*10+r;
	}
  printf("%d",rv);
  
 if(rv=m)
 printf("nis polindrone");
}
