#include<stdio.h>
#include<stdlib.h>

int insertchoose(int arr[],int len);
int main()
{
    int lst[10]={3,4,2,5,8,1,6};

    insertchoose(lst,7);
    for(int i=0;i<7;i++)
    {
        printf("%d ",lst[i]);
    }
    return 0;
}
int insertchoose(int arr[],int len)
{
    int  i,j,key;
    for(i=1;i<len;i++)
      {
        key=arr[i];
        j=i-1;

        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];//把比key大的数放到后面
            j--;//继续跟前面的比较
        }

        arr[j+1]=key;//把key放到空位
      }

}
