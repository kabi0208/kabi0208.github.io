#include <stdio.h>

int main(){
    int i,j,t[10];
    char c;
    for(i=0;i<9;i++){
        scanf("%c ",&c);
        if(c=='X'){
            t[i]=10;
        }
        else{
            t[i]=c-48;
        }
    }
    scanf("%c",&c);
    if(c=='X'){
        t[9]=10;
    }
    else{
        t[9]=c-48;
    }
    for(i=1;i<10;i++){
        t[i]+=t[i-1];
    }
    for(i=1;i<10;i++){
        t[i]+=t[i-1];
    }
    if(t[9]%11==0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}