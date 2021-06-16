#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g;
	float x;
	printf("enter the values:");
	scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);
	x=(((a+b)/c*(d-e))*(f-g));
	printf("the value is=%f",x);
	return 0;
}
