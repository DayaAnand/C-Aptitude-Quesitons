#include<stdio.h>
int main()
{
    char arr[]={'a','b'};
    char *p=arr;
    if(&p ==&arr){   //&arr points the first element and &p point to the memory location of &arr
        printf("Same");
    }
    else{
        printf("Different");
    }
return 0;
}