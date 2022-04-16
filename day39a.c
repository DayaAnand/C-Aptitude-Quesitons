#include<stdio.h>
int main()
{
//input -- 100101
int i; //no register variable given
//  memory of the variable gets stored in machine RAM usually but in register variable it gets stored in CPU register instead of memory
// it throws the error when we are trying to get the address of the variable from RAM. The address of the variable is stored in CPU register
scanf("%d",&i);
printf("%d",i);
return 0;
}