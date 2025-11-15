#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char course[20],duration[20];
    int week;
    scanf("%s",course);
    scanf("%d",&week);
    scanf("%s",duration);

    int n=0;
    char lst[][20]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};

    for(int i=0;i<3;i++)
    {
        printf(" ");
    }
    for(int i=0;i<7;i++)
    {
        printf("%s  ",lst[i]);
    }
    printf("\n");
    for(int i=0;i<3;i++)
    {
        printf("%c",duration[i]);
    }
   for(int i=0;i<(10*week);i++)
   {
       printf(" ");
   }
   int len=strlen(course);
   for(int i=0;i<len;i++)
   {
       printf("%c",course[i]);
   }
   return 0;

}

