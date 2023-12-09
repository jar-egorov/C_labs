#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    int init_array[15][15];
    int new_array[15][15];
    int cnt = 0;
    int sr = 0;
    int minim = 501;
    int sr_cnt = 0;
    FILE *file = fopen("file.txt","w");
    srand(time(NULL));
    for(int i = 0;i<15;i++){
        for(int j = 0;j<15;j++){
            init_array[i][j]=rand()%1000-500;
            fprintf(file,"%d ",init_array[i][j]);
        }
        fprintf(file,"\n");
    }
    fclose(file);
    FILE *file2 = fopen("file.txt","r");
    for(int i = 0;i<15;i++){
        for(int j =0;j<15;j++){
            scanf(file2,"%d",new_array[i][j]);
        }
    }
    for(int i = 0;i<15;i++){
        for(int j = 0;j<=i;j++){
            if(new_array[i][j]<minim){
                minim = new_array[i][j];
            }
        }
    }
    sr/=sr_cnt;
    printf("%d %d %d",cnt,minim,sr);
    fclose(file2);
    return 0;
}
