#include<stdio.h>
int main()  
{
int a[]={1,2,3,4,5,6}; //int = 4 bytes
int b=&a; //& operator return us with the memory location of the array a[]. The size of int a[] of size 6 is 6*4=24.
int c=&a+1; //increments the memory address by one (i.e) if size of the array is 24 increment by 1 gives 48 (24+24)
printf("%d",c-b); //48-24
return 0;
}