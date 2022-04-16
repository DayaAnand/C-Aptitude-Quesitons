#include<stdio.h>
int main()
{
    int c=3,no=30;
    do{
        no/=c;
        printf("%d\n",no);
    }while(c!=0); //infite loop as c is not decremented here
    
return 0;
}