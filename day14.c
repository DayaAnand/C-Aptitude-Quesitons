#include<stdio.h>
int main()
{
char arr[]={1,2,3};
char *p=arr;
printf(" %d ",sizeof(p)); //size of char pointer is 8 bytes
printf(" %d ",sizeof(arr)); //size of one char in the char array is 1, So 1*3=3
return 0;
}