#include<stdio.h>
#include<math.h>
void main()
{int n,i,r,m,sum=0;
 printf("enter AN integer:");
 scanf("%d",&n);
for(i=1;i<=n;i++)
 {
   m=i;
   sum=0;
   while(m!=0)
 {
	 	r=m%10;
 	m=m/10;
 	sum=sum+pow(r,3);
	 }
 	if(sum==i)
 	printf("%d\n",i);
 }
}

