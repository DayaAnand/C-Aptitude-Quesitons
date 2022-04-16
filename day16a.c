#include<stdio.h>
int main()
{
int x,y=5,z=5;
x+= y==z; //== has the highest precedence and the result of x after this is 1
printf("%d ",x); //if x is defined as 0 the output is 1 or else it returns the garbage value
return 0;
}