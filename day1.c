#include<stdio.h>
int main()
{
    for(int n=7;n!=0;n--){
        printf("n= %d",n--); //will result in infinite loop as n never becomes zero
    }
return 0;
}

/*
n
7
5
3
1
-1
*/