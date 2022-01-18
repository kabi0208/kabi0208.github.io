#include <stdio.h>

int main(){
    int t[4],i,j,num,same=0;
    for(i=0;i<4;i++){
        scanf("%d",&t[i]);
    }
    num=7;
    for(i=0;i<4;i++){
        for(j=i+1;j<4;j++){
            if(t[i]==t[j]&&i!=j){
                //printf("%d %d\n",i,j);
                same++;
                if(num<7&&t[i]!=num)
                    same--;
                if(t[i]<num)
                    num=t[i];
            }
        }
    }
    if(same>3)
        printf("WIN\n");
    else if(same>2||same==0)
        printf("R\n");
    else{
        j=0;
        for(i=0;i<4;i++){
            if(t[i]!=num)
                j+=t[i];
        }
        printf("%d\n",j);
    }
    return 0;
}