#include<stdio.h>
void read_string(char *s);

int main()
{   
    char str[10];
    int a;
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        read_string(str);
        break;
    
    default:
        break;
    }
    
    return 0;  
}
void read_string(char *s)
{
    printf("enter the string\n");
    gets(s);
    puts(s);
    printf("END...");
}
