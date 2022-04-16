#include<stdio.h>
int main()
{
int i,j,p=2,q=0;
for(i=0,j=-1;i<p,j<q;i++,j++){ //the comma(,) operator only evaluates the expression right to the comma operator so the loop becomes for(j=-1;j<q;j++)
    printf("Working!\n"); //the for loop checks only the second part 
}
return 0;
}