#include<stdio.h>
int main()
{
int a=0;
a = (a++) + (a++) - (a++) + (++a); 
//unary operations has higher precedence when compared to binary operation
//the expression to be evaluated from left to right because it has the highest precedence
//a = (0)  + (1) - (2) + (4);
printf("%d",a);
return 0;
}