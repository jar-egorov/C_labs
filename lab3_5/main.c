#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    FILE *file = fopen("file.txt","w");
    int a[25];
    int min = 100;
    int max = -100;
    int sr = 0;
    srand(time(NULL));
    for(int i = 0;i<25;i++){
        a[i] = rand()%(99+99)-99;
        fprintf(file,"%d ",a[i]);
        sr+=a[i];
        if(min>a[i]){
            min=a[i];
        }
        if(max<a[i]){
            max=a[i];
        }
    }
    sr=sr/25;
    fprintf(file,"%d %d %d",min,max,sr);
    fclose(file);
    return 0;
}
