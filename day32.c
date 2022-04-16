#include<stdio.h>
int main()
{
int random_number=rand();
printf("random_number=%d \n",random_number);
int a = random_number % 1000; // The range of numbers the rand() function can include is from 0 to 999 as 1000 is after the modulus. The output will always be less than 1000 which is after the modulus
// Any random number divided by 1000 gives 0 as the output
printf("%d",a);

return 0;
}