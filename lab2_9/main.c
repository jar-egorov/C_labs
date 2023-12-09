#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,temp1,temp2,dubl;
    int a[3] = {};
    scanf("%d",&x);
    dubl = x;
    for(int i = 0;i<3;i++){
        a[i]=dubl%10;
        dubl/=100;
    }
    temp1 = x*a[0];
    temp2 = x%a[2];
    dubl = (temp1+temp2)/a[1];
    printf("%d",dubl);
    return 0;
}
