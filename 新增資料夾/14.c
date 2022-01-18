#include<stdio.h>
#include<string.h>

int main(){
    char c[100] ;
    int i,l,x=0 ;
    scanf("%s",c);
    l=strlen(c) ;
    x=0 ;
    for(i=0;i<=l/2;i++){
        if(c[i]!=c[l-1-i]){
            x=1 ;
            break ;
        }
    }
    if(x==1) printf("NO\n") ;
    else printf("YES\n") ;
    return 0 ;
}
