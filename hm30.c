#include<stdio.h>
#include<stdlib.h>
int func(int lst[],int len);
int fund(int lst[],int len);
int main()
{
    int n,lst[1000],max,min;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        do
        {
            scanf("%d",&lst[i]);
        }while(lst[i]<0 ||lst[i]>100);
    }
    //int len=sizeof(lst)/sizeof(lst[0]);   初定义时已定义数组长度为1000.直接用n就好了
    max=func(lst,n);
    min=fund(lst,n);
    printf("%d %d",max,min);
    return 0;
}
int func(int lst[],int len)
{
    int max=lst[0];
    for(int i=0;i<len;i++)
    {
        if(lst[i]>max){max=lst[i];}
    }
    return max;
}

int fund(int lst[],int len)
{
    int min=lst[0];
    for(int i=0;i<len;i++)
    {
        if(lst[i]<min){min=lst[i];}
    }
    return min;
}
