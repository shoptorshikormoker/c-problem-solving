#include<stdio.h>
#include<string.h>
int main()
{
    int j=0;
    char str1[30];
    char revStr[30];
    printf("Enter a string : ");
    scanf("%s",str1);
    printf("Your string : %s \n",str1);
    for(int i=strlen(str1)-1;i>=0;i--)
    {
       revStr[j++]= str1[i];
    }
    printf("Your reversed string : %s \n",revStr);
    printf("size :%d\n",sizeof(str1));
    printf("length :%d\n",strlen(str1));

}
