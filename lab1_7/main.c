#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    scanf("%d",&c);
    switch(c)
    {
    case 1:
        printf("mon");
        break;
    case 2:
        printf("tue");
        break;
    case 3:
        printf("wed");
        break;
    case 4:
        printf("tue");
        break;
    case 5:
        printf("fri");
        break;
    case 6:
        printf("sat");
        break;
    case 7:
        printf("sun");
        break;
    default:
        printf("invalid input");
    }
    return 0;
}
