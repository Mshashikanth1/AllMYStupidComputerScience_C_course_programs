#include<stdio.h>
#include<string.h>
void main()
{
	int i,n,c,sum=0;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	    {c=n%i;
	    if(c==0)
	    sum=sum+i;
	    }
	if(sum==n)
	printf("%d is perfect no",n);
	}


