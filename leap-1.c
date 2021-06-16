#include<stdio.h>
int a;
int main()
{ 
printf("enter the year");
scanf("%d",&a);
if(a%400==0&&a%4==0&&a%100!=0)
  printf("a is leapyear");
else
printf("a is not a leap year");
  return 0;
}
