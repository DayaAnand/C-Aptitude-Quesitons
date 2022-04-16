#include<stdio.h>
int main()
{
    int first=50;
    int second=60,third;
    third = first/*Comment 1*/+second;
    printf("%d/*Comment 2*/\n",third); //C compiler removes all the /**/ except when it's inside quotes
return 0;
}