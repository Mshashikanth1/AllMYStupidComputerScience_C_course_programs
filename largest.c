#include<stdio.h>
void main()
{int a[30],n,i,sec,big;
printf("enter size:");
scanf("%d",&n);
printf("enter n integers");
for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   big=a[0];
for(i=1;i<n;i++)
{if(a[i]>big)
big=a[i];
else
sec=a[i];
}

   printf("secondlargest no is %d",sec);
}
