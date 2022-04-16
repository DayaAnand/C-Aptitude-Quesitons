#include<stdio.h>
int main()
{
    int c=5,no=1000;
    do{
        no/=c;
    }while(c--);
    
    printf("%d\n",no); // it may provide divide by zero error
return 0;
}

//memory
/*
c   no
5   1000
4   200
3   50
2   16  
1   8
0   8
end error
*/