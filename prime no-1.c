#include<stdio.h>
int main()
{ int i,n,c=0;  
  printf("enter the num");
  scanf("%d",&n);
  for(i=2;i<n;i++)
  { if(n%i==0)
    c++;
  }
  if(c==0)
  printf("%d is prime",n);
  else
  printf("%d is not a prime",n);
  return 0;
}
