#include<stdio.h>
#define R 10
#define C 20
int main()
{
int(p)[R][C]; //size of int = 4 bytes size of the 2d array, 10*20=200. Even if it is pointer the output will not change
printf("%d",sizeof(p)); //prints 4*200=800
return 0;
}