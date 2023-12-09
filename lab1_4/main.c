#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,f,l,m,dubl,fd,sd;
    float sumd;
    scanf("%d",&x);
    dubl = x;
    l = dubl%10;
    dubl/=100;
    m = dubl%10;
    dubl/=100;
    f = dubl;
    fd = x*l;
    sd = x%f;
    sumd = (fd+sd)/m;
    printf("%.3lf",sumd);
    return 0;
}
