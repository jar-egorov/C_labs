#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    int a[20];
    srand(time(NULL));
    FILE *file = fopen("file.txt", "r");
    for(int i =0;i<20;i++){
        fscanf(file,"%d",&a[i]);
        a[i]+=rand();
        printf("%d ",a[i]);
    }
    fclose(file);
    return 0;
}
