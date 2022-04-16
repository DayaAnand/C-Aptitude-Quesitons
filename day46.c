#include<stdio.h>
void main()
{
int i,j=3;
float k=7;
i=k%j; //float and int cannot work for %(mod)
//mod can work only for 2 integers
printf("%d",i);
return 0;
}