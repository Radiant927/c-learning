//寻找一个小数组在大数组中缺失的元素。
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[1000],b[1000],n,m;
    scanf("%d",&n);//数组多个值应该如何输入
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);//这里的a[i]还是单个值，不是数组，还是要用&标注地址
    }

    scanf("%d",&m);
    for(int j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
    }

    int c[1000],d=0;
    for(int i=0;i<n;i++){
        int found=0;//利用到if语句中布尔值的判断关系，非0即为真/
        for(int j=0;j<m;j++)
        {
            if(b[j]==a[i])
            {
                found=1;
                break;//一定要用上述布尔值的方法辅助判断并且即使推出，否则会进行很多次重复并且得到很多重复的值。
            }
        }
    if(!found)
    {
        c[d]=a[i];
        d++;
    }
    }
    for(int i=0;i<d;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}
