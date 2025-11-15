#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,score[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&score[i]);
    }
    printf("\n");

    for(int i=0;i<n-1;i++)//进行(n-1)轮冒泡,植树问题
        for(int j=0;j<n-1-i;j++)//每一轮要比较的次数，每一轮都会有一个数沉底（已经与之前的数比较过了，所以-1）
            if(score[j]>score[j+1])//j才是要比较的下标
             {
                 int t=score[j];
                 score[j]=score[j+1];
                 score[j+1]=t;
             }
    for(int i=0;i<n;i++)
    {
        printf("%d ",score[i]);
    }
}
