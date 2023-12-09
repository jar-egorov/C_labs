#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    FILE *file;
    file = fopen("text.txt","w");
    srand(time(NULL));
    int d;
    float a,b,c;
    d = rand()%124-90;
    a = (float)rand()/RAND_MAX*124-90;
    b = (float)rand()/RAND_MAX*124-90;
    c = (float)rand()/RAND_MAX*124-90;
    fprintf(file, "%d %f %f %f",d,a,b,c);
    printf("%d\n",d);
    printf("%f\n",a);
    printf("%f\n",b);
    printf("%f\n",c);
    return 0;
}
