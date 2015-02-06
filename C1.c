#include <stdio.h>
#include <stdlib.h>
void vowel(char *rea, int siz)
{

    int y;
    int vow[5];
    for(y = 0; y<5;y++)
        vow[y] = 0;
    int u;
    for(u=0;u<siz;u++)
    {
        char t = rea[u];
        if(t == 'a')
            vow[0] = vow[0]+1;
        else if(t == 'e')
            vow[1] = vow[1]+1;
        else if(t == 'i')
            vow[2] = vow[2]+1;
        else if(t == 'o')
            vow[3] = vow[3]+1;
        else if(t == 'u')
            vow[4] = vow[4]+1;


    }
    printf("A count: %d\nE count: %d\nI count: %d\nO count: %d\nU count: %d\n",vow[0],vow[1],vow[2],vow[3],vow[4]);
}
int main(int arg0, char ** argv)
{
    int index = 0;
    char output[45000];
    char t = ' ';

    printf("sanity\n");
    char *file = "hitch.txt";
    FILE *read = fopen(file,"r");
    printf("The Original Text\n");

    while((t=fgetc(read))!= EOF)
    {
        output[index++] = t;
        printf("%c",t);

    }
    int size = index;
    printf("\n\n The Mirror image\n");
    for(;index>=0;index--)
        printf("%c",output[index]);

    printf("\n\n The Vowel Count\n");
    vowel(output,size);

    return 0;
}

