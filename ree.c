#include<stdio.h>
#include<math.h>
void main()
{int n,i,j,p=1;
 printf("enter AN integer:");
 scanf("%d",&n);
for(i=1;i<=n;i++)
 {
  for(j=1;j<=i;j++)
  {printf("%d\t",p);
  p++;
  }
  printf("\n");
}
}
