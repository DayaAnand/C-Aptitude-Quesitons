#include<stdio.h>
int main()
{
int arr[]={1,2,3};
char *p=arr;
printf(" %d ",sizeof(p)); //size of char pointer is 8 bytes
printf(" %d ",sizeof(arr)); //size of one int in the int array is 4, So 4*3=12
return 0;
}