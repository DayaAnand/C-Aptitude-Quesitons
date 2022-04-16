#include<stdio.h>

union test{
    int x,y; // 4bytes + 4bytes
    char arr[8]; //1 * 8 bytes =8 bytes 
    //the union returns the maximum of a single variable size or an array size -- return 8;
    //If we use struct and struct sums up all the size of each variable and an array size -- returns 16
} u;

int main()
{
printf("%d",sizeof(u));
return 0;
}