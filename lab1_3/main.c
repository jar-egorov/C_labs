#include <stdio.h>
#include <stdlib.h>

int main()
{
    float rabbit = 100;
    printf("%.3lf\n",rabbit);
    rabbit*=6.0;
    printf("%.3lf\n",rabbit);
    rabbit = ((int)rabbit)%45;
    printf("%.3lf\n",rabbit);
    rabbit-=101.0;
    printf("%.3lf\n",rabbit);
    rabbit/=0.005;
    printf("%.3lf\n",rabbit);
    rabbit+=53.1;
    printf("%.3lf\n",rabbit);
    return 0;
}
