//二分查找法
#include<stdio.h>
#include<stdlib.h>
//先把原来的数列按顺序排列好，在从中间开始往两侧找对应值
int binsearch(long num[],long x,int n);
int main()
{
    int n,num[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }

}
int binsearch(long num[],long x,int n)
{
    int lleft=0,right=n-1,mid;//记录下来的是索引
    while(left<=right)
    {
        mid=(left+right)/2;//如果一共有奇数个，mid%2==0。偶数则相反。
        if(x>num[mid])
        {
            left=mid+1;
        }
        else if(x<num[mid])
        {
            right=mid-1;
        }
        else{
            return mid;
        }
        return -1;
    }
}
