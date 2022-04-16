#include<stdio.h>
int main()
{
int x=10;
static int y=x; // As it is static variable we cannot assign it to a variable rather we should assign a constant    
if(x==y)//returns error
printf("Yes");
else
printf("No");
return 0;
}