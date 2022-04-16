#include<stdio.h>
int main()
{
int i,j,p=0,q=2;
for(i=0,j=0;i<p,j<q;i++,j++){ //the comma(,) operator only evaluates the expression right to the comma operator so the loop becomes for(j=0;j<q;j++)
    printf("Working!\n"); //the for loop checks only the second part 
}
return 0;
}