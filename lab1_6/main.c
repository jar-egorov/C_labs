#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
int main()
{
    double l,p,f,z,c,temp;
    scanf("%lf %lf %lf %lf",&p,&f,&z,&c);
    temp = log(z-c);
    if(f==-temp || temp=<0)
        {
        printf("invalid input");
        return 1;
        }
    l = (5*p - 3)/(pow((f+temp),1/3));
    printf("%lf",l);
    return 0;
}
