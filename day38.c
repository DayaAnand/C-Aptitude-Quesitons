#include<stdio.h>
void main()
{
int a=5;
float b;
printf("%d ",sizeof(++a + b)); //any increment,decrement or any evaluation done will not be reflected outside when it is inside the sizeof()
//type promotion is done from int to float as we are adding int and float to get promoted
printf("%d ",a); //prints 5
return 0;
}