#include<stdio.h>
#include<math.h>
void main()
{int n,i,j;
 printf("enter AN integer:");
 scanf("%d",&n);
for(i=1;i<=n;i++)
 {
  for(j=1;j<=i;j++)
  {printf("%-5d",j);
  }
  printf("\n");
}
}
