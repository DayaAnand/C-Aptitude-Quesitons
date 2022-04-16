#include<stdio.h>
int main()
{
int i;
i=(printf("example "),printf("world")); //pritnf prints the statement inside the quotes from left to right and finally the size of the second printf after the comma 
printf(" %d",++i);
return 0;
}