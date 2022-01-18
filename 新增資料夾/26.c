#include <stdio.h>

int main(){
    int n,i,j,trash,count;
    int table[10][2];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&table[i][0]);
        count=0;
        trash=table[i][0];
        while(trash>9){
            count+=trash%10;
            trash/=10;
        }
        table[i][1]=trash+count;
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            trash=0;
            if(table[j][1]>table[j+1][1]){
                trash=1;
            }
            if(table[j][1]==table[j+1][1]){
                if(table[j][0]>table[j+1][0])
                    trash=1;
            }
            if(trash==1){
                table[n][0]=table[j][0];
                table[n][1]=table[j][1];
                table[j][0]=table[j+1][0];
                table[j][1]=table[j+1][1];
                table[j+1][0]=table[n][0];
                table[j+1][1]=table[n][1];
            }
        }
    }
    for(i=0;i<n-1;i++){
        printf("%d ",table[i][0]);
    }
    printf("%d\n",table[n-1][0]);
    return 0;

}