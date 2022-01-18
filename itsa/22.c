#include <stdio.h>

int main(){
    int table[3][3];
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&table[i][j]);
        }
    }
    for(i=0;i<3;i++){
        if(table[i][0]==table[i][1]&&table[i][2]==table[i][1]){
            printf("True\n");
            return 0;
        }
        if(table[0][i]==table[1][i]&&table[2][i]==table[1][i]){
            printf("True\n");
            return 0;
        }
    }
    if(table[0][0]==table[1][1]&&table[1][1]==table[2][2]){
        printf("True\n");
        return 0;
    }
    if(table[0][2]==table[1][1]&&table[1][1]==table[2][0]){
        printf("True\n");
        return 0;
    }
    printf("False\n");
    return 0;

}