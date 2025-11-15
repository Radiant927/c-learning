#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[31];
    double avg=0;
    for(int i=0; i<10;i++)
    {
        do
        {
            scanf("%d",&a[i]);
        }while(a[i]<0 || a[i]>100 );
        avg+=a[i];
    }
    printf("%.2lf",avg/10);
    return 0;
}
