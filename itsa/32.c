#include<stdio.h>

int main()
{
    char c[20000]={'\0'} ;
    int k,i ;

    fgets(c,10000,stdin);
    scanf("%d",&k) ;
    //k=k%26 ;
    
        for(i=0;c[i]!='\0';i++)
        {
            if(c[i]>='a'&&c[i]<='z')
            {
                if(c[i]+k>'z') c[i]=c[i]+k-26 ;
                else if(c[i]+k<'a') c[i]=c[i]+k+26 ;
                else c[i]=c[i]+k ;
            }
            else if(c[i]>='A'&&c[i]<='Z')
            {
                if(c[i]+k>'Z') c[i]=c[i]+k-26 ;
                else if(c[i]+k<'A') c[i]=c[i]+k+26 ;
                else c[i]=c[i]+k ;
            }
            else if(c[i]>='0'&&c[i]<='9'){
                c[i]=(c[i]-'0'+k)%10+'0';
            }
        }
        for(i=0;c[i]!='\0';i++)
        {
            printf("%c",c[i]) ;
            c[i]='\0' ;
        }

    return 0 ;
}
