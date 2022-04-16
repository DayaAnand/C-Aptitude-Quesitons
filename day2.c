#include<stdio.h>
int main()
{
int i=1;
do{
    printf("%d\n",i++); //i is printed as 1 and get incremented to 2
    if(i<15){
        continue;
    }
}while(0); //only executes for one time as 0 means false
return 0;
}