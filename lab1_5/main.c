#include <stdio.h>
#include <stdlib.h>

int main()
{
    char temp;
    scanf("%c",&temp);
    if(temp == 'r'){
        printf("red");
    }else if(temp == 'g'){
    printf("green");
    }else if(temp == 'b'){
    printf("blue");
    }else{printf("invalid input");}
    return 0;
}
