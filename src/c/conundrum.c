#include <stdio.h>
#include <string.h>

int main() {

    int length,r,day=0;
    char string[300];
    scanf("%s",string);
    length= strlen(string);
    for(int i=0;i<length;i++)
    {
        r=i%3;//remainder to check letter based on position
        if(r==0)//p
        {
            if(string[i]!='P')
            {
                day++;
            }    
        }
        else if(r==1)//e
        {
            if(string[i]!='E')
            {
                day++;
            } 
        }
        else if (r==2)
        {
            if(string[i]!='R')
            {
                day++;
            } 
        } 
    }
    printf("%d",day);

    return 0;
}
