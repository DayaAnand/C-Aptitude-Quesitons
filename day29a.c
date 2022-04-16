#include<stdio.h>
int main()
{
int arr[3]={010,0010,00010};
for(int i=0;i<3;i++){
    printf("%d ",arr[i]); //if the first start digit is zero(0) the array element is in octal system so prints the output in octal system
    //if the first start digit is one(1) then it is normal integer
    // 010   -- 0*8^0 + 1*8^1 = 8
    // 0010  -- 0*8^0 + 1*8^1 = 8
    // 00010 -- 0*8^0 + 1*8^1 = 8
}
return 0;
}