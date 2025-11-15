#include<stdio.h>
#include<stdlib.h>

void DataSort(int score[],int n);
int main()
{
    int n,score[10000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&score[i]);
    }
    DataSort(score,n);
    for(int k=0;k<n;k++)
    {
        printf("%d",score[k]);
    }
    return 0;
}
void DataSort(int score[10000],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(score[j]>score[i])
            {
                temp=score[i];
                score[i]=score[j];
                score[j]=temp;
            }
        }
    }
}