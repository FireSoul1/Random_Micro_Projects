#include <stdio.h>
#include <stdlib.h>

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

    printf("\n\n The Vowel Count")

    return 0;
}
void vowel(char *read, int siz)
{

    int vow[5];
    int u;
    for(u=0;u<size;u++)
    {
        if()

    }
}
