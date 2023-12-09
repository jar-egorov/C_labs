#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    int a[25];
    int cnt = 0;
    srand(time(NULL));
    for(int i = 0;i<25;i++){
        a[i] = rand()%(520+250)-250;
    }
    for(int i = 0;i<25;i++){
        if(a[24-i]%10==2){
            cnt++;
        }
        if(cnt==3){
            printf("%d",a[24-i]);
            break;
        }
        if(i==24){
            printf("NULL");
        }
    }
    return 0;
}
