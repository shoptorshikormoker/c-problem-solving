#include<stdio.h>
#include<string.h>
int main()
{
    char text[1000];
    int letterCount=0,wordCount=0,i=0;
    printf("Enter your text: ");
    fgets(text, sizeof(text), stdin);
    while(text[i]!='\0')
    {
        if((text[i] >= 'a' && text[i] <= 'z')||(text[i] >= 'A' && text[i] <= 'Z')){
            letterCount++;
        }
        if(text[i] == ' ' || text[i] == '\t' || text[i] == '\n' || text[i] == '\0' ){
            wordCount++;
        }
        i++;

    }
    printf("Total letter: %d \n",letterCount);
    printf("Total word : %d \n",wordCount);
    return 0;

}
