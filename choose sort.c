#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int choose(int score[],int len);
int main()
{
     int n,score[10000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&score[i]);
    }
    int index=choose(score,n);
    printf("%d",index);
    return 0;
}
int choose(int score[],int len)
{
    int i,j,k=0;
    for(i=0;i<len;i++)
    {
        if(score[i]>score[k])
        {
            k=i;
        }
    }
    return k;


}
