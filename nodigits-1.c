//wap to print the number of digits in an integer
#include<stdio.h>
int main()
{
	int n,i;
	printf("enter an integer");
	scanf("%d",&n);
	while(n!=0)
    {
	n=n/10;
    i++;
    } 
   printf("the number of digits in given integer is=%d",i);
	return 0;
}
