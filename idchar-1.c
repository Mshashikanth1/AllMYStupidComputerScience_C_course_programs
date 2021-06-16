#include<stdio.h>
char _,a,A,e,E,i,I,o,O,u,U;
int main()
{ 
  printf("enter char");
  scanf("%c",&_);
   if(_=='a'||_=='A'||_=='e'||_=='E'||_=='I'||_=='i'||_=='o'||_=='O'||_=='U'||_=='u')
   printf("%c is vowel",_);
   else
   printf("%c is NOTA consonent",_);
   return 0;   
}
