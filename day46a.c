#include<stdio.h>
void main()
{
int i,j=3;
float k=7;
i=fmod(k,j); //float and int cannot work for %(mod)
//mod can work only for 2 integers
//to avoid the error we are using the fmod function and the fmod function can compare the float and the integer values
printf("%d",i);
return 0;
}