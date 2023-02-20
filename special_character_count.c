#include<stdio.h>
int main()
{
    char str[10];
    scanf("%s",str);
    int c=0;
    for(int i=0;str[i]!='\0';i++)
    {
            if(str[i]=='@' || str[i]=='$' || str[i]=='&' || str[i]=='*')
            c+=1;

    }
 printf("%d",c);
}

