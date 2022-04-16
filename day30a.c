#include<stdio.h>
int main()
{
int a,b=5;
a= -b++; //-b and b++ both have the same precedence as both are unary operators
//evaluated as -(b++)
printf("%d %d",a,b);
return 0;
}   