#include<stdio.h>

int reverse(int i){
    if(i>5) //gets into infinite loop and the control does not enter here
        exit(0);
    printf("%d\n",i);
    //i++; if i++ is given here then it prints 1 2 3 4 5
    return reverse(i++); // the value of i is 1 and then increments the i value and then uses the i value for the other statements
}

int main()
{
reverse(1);
return 0;
}