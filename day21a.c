#include<stdio.h>
int main()  
{
int a[]={1,2,3,4,5}; //int = 4 bytes
int b=&a; //& operator return us with the memory location of the array a[]. The size of int a[] of size 5 is 5*4=20.
int c=&a+2; //increments the memory address by two (i.e) if size of the array is 24 increment by 2 gives 60 (20+20+20)
printf("%d",c-b); // 60-20
return 0;
}