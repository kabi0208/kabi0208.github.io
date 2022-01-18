#include <stdio.h>

int main(){
    int n,a1,a2,a3;
    int out[3];
    scanf("%d,%d,%d,%d",&n,&a1,&a2,&a3);
    n-=(a1*15+a2*20+a3*30);
    if(n<0){
        printf("0\n");
        return 0;
    }
    out[1]=n/50;
    n-=(n/50*50);
    out[0]=n/5;
    n-=(n/5*5);
    printf("%d,%d,%d\n",n,out[0],out[1]);
    return 0;
}