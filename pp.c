#include<stdio.h>
#include<string.h>
void main()
{    char ch;
	int i,n,c,sum=0;
	printf("\n\nenter the value of n:");
	scanf("%d",&n);
	do{
	
	for(i=1;i<n;i++)
	    {c=n%i;
	    if(c==0)
	    sum=sum+i;
	    }
	if(sum==n)
	printf("%d is perfect no",n);
	else
	printf("not a perfect no");
		printf("\n\ndo you want to continue? t/f\n\n");
	ch=getche();
		printf("\n\nenter the value of n:");
	scanf("%d",&n);
	}while(ch=='t'||ch=='T');
	}
