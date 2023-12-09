#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    int a[28];
    srand(time(NULL));
    for(int i = 0;i<28;i++){
        a[i] = rand()%899+100;
    }
    for(int i = 0;i<28;i++){
        printf("%d ",a[i]);
        if(i==13){
            printf("\n");
        }
    }
    return 0;
}
