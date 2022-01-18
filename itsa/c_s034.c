#include <stdio.h>

int main(){
    int n,i;
    float max,min,num;
    scanf("%d",&n);
    scanf("%f",&num);
    max=num;
    min=num;
    for(i=0;i<n-1;i++){
        scanf("%f",&num);
        if(num>max)
            max=num;
        if(num<min)
            min=num;
    }
    printf("%.2f\n%.2f\n",max,min);
    return 0;
}