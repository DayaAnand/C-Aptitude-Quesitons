#include<stdio.h>
int main()
{
int arr[3]={00001,00100,10000};
for(int i=0;i<3;i++){
    printf("%d ",arr[i]); //if the first start digit is zero(0) the array element is in octal system so prints the output in octal system
    //10000 is an integer as the first start digit is one(1)
    // 00001 -- 1*8^0 = 1
    // 00100 -- 0*8^0 + 0*8^1 + 1*8^2 = 64
}
return 0;
}