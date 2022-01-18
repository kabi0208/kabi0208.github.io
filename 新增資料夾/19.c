#include <stdio.h>

int main(){
    int n,s,d,i,j;
    int hour[24];
    for(i=0;i<24;i++){
        hour[i]=0;
    }
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&s,&d);
        for(j=s;j<d;j++)
            hour[j]++;
    }
    n=0;//max
    for(i=0;i<24;i++){
        if(hour[i]>n)
            n=hour[i];
    }
    printf("%d\n",n);
    return 0;
}