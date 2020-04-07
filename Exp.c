#include <stdio.h>
#include <string.h

void read_string(char *s);
void display_string(char *s);
void merge_str(char *s,char *s1,char *s2);
void copy_str(char *s,char *s1,int m,int n);

int main()
{
    char str[10],str1[100],merge_str2[250];
    char copy_str1[100];
    int n,m,a;

    printf("select anyone option:\n");
    printf("1.read string\n");
    printf("2.display string\n");
    printf("3.merge string\n");
    printf("4.copy string\n");
    printf("5.length of the string\n");
    printf("6.count upper case,lower case and numbers string\n");

    scanf("%d",&a);

    
switch (a)
{
case 1:
    printf("Here\n");
    read_string(str);
    break;
case 2:
     display_string(str);
     break;      
case 3:
    {
        read_string(str1);
        merge_str(str,str1,merge_str2);
    }
    break;
case 4:
{
    printf("enter the values of m and n:");
    scanf("%d %d",&m,&n);

    copy_str(str,copy_str1,m,n);
}
break;
default:
printf("select the valid option:");
    break;
}

    return 0;
}

void read_string(char *s)
{
    printf("enter the string\n");
    gets(s);
    puts(s);
    printf("END");
}

void display_string(char *s)
{ 
    printf("the string is:\n");
    puts(s);
}

void merge_str(char *s,char *s1,char *s2)
{
  strcpy(s2,s);
  strcpy(s2,s1);
  printf("after merging:\n");

  display_string(s2);
}

void copy_str(char *s,char *s1,int m,int n)
{
    int j=0;
   read_string(s);

    for (int i = n; i <m ; i++)
    {
        s1[j]=s[i];
        j++;
    }
    s1[j]='\0';
printf("the copied string is:");
    puts(s1);
}