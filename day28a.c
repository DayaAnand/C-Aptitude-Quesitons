#include<stdio.h>
int main()
{
int arr[2][2]={{1,2},{3,4}};
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        printf("%d ",i[j[arr]]);//j[i[arr]] is equivalent to arr[j][i]
    }
}
return 0;
}