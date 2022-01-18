#include <stdio.h>

int main() {
    int inhour, inmin, outhour, outmin,price=0;
    scanf("%d%d%d%d", &inhour, &inmin, &outhour, &outmin);
    inmin=inhour*60+inmin;
    outmin=outhour*60+outmin;
    outmin-=inmin;
    if(outmin<2*60)
        printf("%d\n",outmin/30*30);
    else if(outmin<4*60)
        printf("%d\n",120+(outmin-120)/30*40);
    else
        printf("%d\n",280+(outmin-240)/30*60);
    return 0;
}