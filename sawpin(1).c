#include<stdio.h>
int a,b;
int main()
{
	int c;
	printf("enter the value of a and b:");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("the value of after swaping a=%d,b=%d",a,b);
	return 0;
}

