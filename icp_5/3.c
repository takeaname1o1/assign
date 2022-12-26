#include<stdio.h>
#include<string.h>

void words(char arr[], int n)
{
    for(int i=n-1; i>=0; i--)
    {
       if(arr[i]==' ')
       {
           arr[i]='\0';
           printf("%s ", &(arr[i])+1);
       }
    }
    printf("%s", arr);
}

int main()
{
    char x[50];
    printf("Enter the sentence: ");
    //gets(x);
    scanf("%[^\n]s",x);

    int size=strlen(x);

    words(x, size);
    return 0;
}
