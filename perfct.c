#include<stdio.h>
void main()
{
	int i=1,j,c,m,sum=0;
	printf("enter the value of m:");
	scanf("%d",&m);
   for(j=1;j<=m;j++)
	{
	while(i<j)
	{ c=j%i;
	  if(c==0)
	  sum=sum+i;
	  if(sum==j)
	  printf("\n%d",i);
	  i++;
	}
     }
}



