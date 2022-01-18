#include <stdio.h>

int main(){
    int n,i,t[100],j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&t[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(t[j]>t[j+1]){
                t[n]=t[j];
                t[j]=t[j+1];
                t[j+1]=t[n];
            }
        }
    }
    int total=0;
    for(i=1;i<n;i++){
        total+=t[i-1];
        t[i]+=t[i-1];
    }
    printf("%d\n",total);
    return 0;
}