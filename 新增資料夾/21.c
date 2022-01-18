#include <stdio.h>

int main(){
    float max,min,num;
    scanf("%f",&max);
    min=max;
    for(int i=0;i<9;i++){
        scanf("%f",&num);
        if(num>max)
            max=num;
        if(num<min)
            min=num;
    }
    printf("maximum:%.2f\n",max);
    printf("minimum:%.2f\n",min);
    return 0;
}