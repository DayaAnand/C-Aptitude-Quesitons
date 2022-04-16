#include<stdio.h>
int main()
{
    char arr[]={'a','b'};
    char *p=arr;
    if(p ==&arr){   //&arr points the first element 
    //*p - First element of arr
    //p - Memory address of *p
        printf("Same");
    }
    else{
        printf("Different");
    }
return 0;
}