#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int h,m;

    scanf("%d %d",&h,&m);
    m-=45;
    if(m<0)
    {
        m+=60;
        h-=1;
        if(h<0)
        {
            h+=24;
        }
    }
    printf("%d %d",h,m);
    return 0;
}
