#include<stdio.h>

union test{
    double x,y; // 8bytes + 8bytes
    int arr[8]; //4 * 8 bytes =32 bytes 
    //the union returns the maximum of a single variable size or an array size -- return 32;
    //If we use struct and struct sums up all the size of each variable and an array size -- returns 48
} u;

int main()
{
printf("%d",sizeof(u));
return 0;
}