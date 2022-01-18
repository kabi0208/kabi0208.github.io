#include <stdio.h>

int main(){
    int n,t,m,k,i,j,p,c[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d%d",&t,&m,&k);
        for(j=0;j<k;j++){
            scanf("%d",&c[j]);
        }
        for(j=0;j<k-1;j++){
            for(int r=0;r<k-j-1;r++){
                if(c[r]>c[r+1]){
                    c[k]=c[r];
                    c[r]=c[r+1];
                    c[r+1]=c[k];
                }
            }
        }
        p=0;
        for(j=0;j<m;j++){
            p+=c[j];
        }
        
        if(p>t){
            printf("Impossible\n");
        }
        else{
            printf("%d\n",p);
        }
    }
    return 0;
}