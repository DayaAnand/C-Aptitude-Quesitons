#include<stdio.h>
int main()
{
int a=5;
a = (a++) + (a--) - (a++) + (--a); 
//unary operations has higher precedence when compared to binary operation  
//the expression to be evaluated from left to right because it has the highest precedence
//a = (5)  + (6) - (5) + (5);
printf("%d",a);
return 0;
}