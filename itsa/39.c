#include <stdio.h>

int main(){
    int n,t[3],i,j,f=0,total,max;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        f=0,total=0,max=0;
        for(j=0;j<3;j++){
            scanf("%d",&t[j]);
            total+=t[j];
            if(t[j]<60)
                f++;
            if(t[j]>max)
                max=t[j];
        }
        if(f==0){
            printf("P\n");
            continue;
        }
        else if(f==1&&total>=220){
            printf("P\n");
            continue;
        }
        else if(f==1&&total<220){
            printf("M\n");
            continue;
        }
        else if(f==2&&max>=80){
            printf("M\n");
            continue;
        }
        else{
            printf("F\n");
            continue;
        }
    }
    return 0;
}