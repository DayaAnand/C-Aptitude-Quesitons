#include<stdio.h>
int main()
{
register int i; //  memory of the variable gets stored in machine RAM usually but in register variable it gets stored in CPU register instead of memory
//it throws the error as we are trying to get the address of the variable from RAM. The address of the variable is stored in cpu register
scanf("%d",&i);
printf("%d",i);
return 0;
}