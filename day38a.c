#include<stdio.h>
void main()
{
float a=1.0;
double b;
printf("%d ",sizeof(--a - b)); //any increment,decrement or any evaluation done will not be reflected outside when it is inside the sizeof()
//type promotion is done from float to double as we are adding float and double to get promoted
printf("%f ",a); //prints 1.0
return 0;
}