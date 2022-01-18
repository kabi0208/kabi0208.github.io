#include <stdio.h>

int main(){
    int month;
    scanf("%d",&month);
    if(month<=2)
        printf("Winter\n");
    else if(month<=5)
        printf("Spring\n");
    else if(month<=8)
        printf("Summer\n");
    else if(month<=11)
        printf("Autumn\n");
    else
        printf("Winter\n");
    return 0;
}