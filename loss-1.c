#include<stdio.h>
int main()
{
	float cp,sp,loss,gain;
	printf("enter the value of cp and sp");
	scanf("%f%f",&cp,&sp);
	if(cp>sp)
	{
	printf("there is a loss in business");
	printf("\nthe percentage in loss is=%f",(cp-sp)/(cp)*(100));
	}
    else if(cp<sp)
   {
	printf("there is a gain in business");
	printf("\nthe percentage in gain is=%f",(sp-cp)/(sp)*(100));
   }
   else 
   printf("no loss and no gain");
   return 0;
}
