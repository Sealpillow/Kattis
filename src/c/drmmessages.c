#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



int main() {
    char word[15001],*p,alpha,final[7501];
    fgets(word,15001,stdin);
    if(p=strchr(word,'\n'))
    {
        *p='\0';
    }
    int len= strlen(word);

    //divide For each half,
    for(int i=0;i<len;i+=len/2) //increment by half
    {
        //rotate
        int sum = 0;;
        for(int x=0;x<len/2;x++)
        {
          sum += word[i+x]- 'A'; // get the total index of the alpha
        }
        for(int x=0;x<len/2;x++)
        {
            int index = word[i+x]-'A'; // get the index of alpha
            int addi = index + sum; // total increment
            int multiple = (addi)/26; // check if there is a loop, e.g A + 26 -> A
            word[i+x] = (addi-multiple*26) + 'A'; // change the letter based on the increment
        }
    }
    for(int i=0;i<len/2;i++)
    {
        //rotate
        int incre = (word[i] - 'A' ) + (word[i+len/2] - 'A'); // total increment by 2 alpha
        if(incre>=26) // check if there is loop, since only 1 char just use if statement
        {
            incre-= 26;
        }
        final[i]= incre + 'A'; // add increment to A
    }
    printf("%s\n",final);

    return 0;
}
