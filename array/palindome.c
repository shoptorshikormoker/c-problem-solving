#include<stdio.h>
#include<string.h>
#include <stdbool.h>
int main()
{
    int j=0;
    bool isPalindome=true;

    char str1[30];
    printf("Enter a string : ");
    scanf("%s",str1);
    printf("Your string : %s \n",str1);
    for(int i=strlen(str1)-1;i>=0;i--)
    {
        if(str1[i]!=str1[j++])
        {
            isPalindome=false;
            break;

        }

    }


    if(isPalindome)
    {
        printf("palindome");
    }
    else{
        printf("not palindome");
    }

}

