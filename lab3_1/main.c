#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    int a[28];
    float b[28];
    srand(time(NULL));
    for(int i = 0; i<28;i++){
        a[i] = (rand() % (47+32))-32;
        b[i] = (float)rand()/RAND_MAX*(9.40+15.75)-(9.4+15.75);
    }
    for(int i = 0;i<28;i++){
        printf("array_int[%d]=%d    ",i,a[i]);
        printf("array_double[%d]=%fl\n",i,b[i]);
    }
    return 0;
}
