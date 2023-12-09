#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e;
    float fa,fb,fc;
    FILE *file;
    file = fopen("text.txt","r");
    fscanf(file, "%d %d %d %d %d",a,b,c,d,e);
    fscanf(file, "%f %f %f",fa,fb,fc);
    printf("%d %d %d %d %d\n",a,b,c,d,e);
    printf("%f %f %f",fa,fb,fc);

    return 0;
}
