#include<stdio.h>

int reverse(int i){
    if(i>5) 
        exit(0);
    printf("%d\n",i);
    //i++; if i++ is given here then it prints 1 2 3 4 5
    return reverse(++i);
}

int main()
{
reverse(1);
return 0;
}