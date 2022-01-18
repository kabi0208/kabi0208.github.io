#include <stdio.h>

int main(){
    int x,y,i,j;
    scanf("%d%d",&x,&y);
    int table[100][100];
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            scanf("%d",&table[i][j]);
        }
    }
    for(j=0;j<y;j++){
        for(i=0;i<x-1;i++){
            printf("%d ",table[i][j]);
        }
        printf("%d\n",table[i][j]);
    }
}