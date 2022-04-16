#include<stdio.h>
void main()
{
int x=0,k;
while(+(+x--)!=0) //+ outside (+x--) does not affect the expression like + (*) + (=) + ,but - will after the expression like - (*) + (=) - , - (*) - (=) + 
x++; //the control does not enter the while loop
printf("%d",x);
return 0;
}