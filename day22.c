#include<stdio.h>
int main()
{
int a[]={1,2,3,4,5,6};
int *ptr=(int*)(&a+1); //&a returns 24, the &a+1 returns 25 as(&a+1) [NOTE: If they were not enclosed in brackets then the result will be 48]. Converting them into pointers it will point to the end of the array added with one 
printf("%d ",*(ptr-1)); //then again printing the pointer subtracted with 1. Same [NOTE] applies here also
// it will print the garbage value when *ptr-1[without brackets]is printed as the pointer pointes before the beginning of the array
return 0;
} 