//二维数组的组间相加、相乘和转换
#include<stdio.h>
#include<stdlib.h>
#define M 3//在头文件部位不加分号
#define N 4
#define P 3
void add(int a[M][N],int b[M][N],int c[M][N]);
void product(int a[M][N],int d[N][P],int r[M][P]);
//尤其关注product的函数，两个列表的行和列必须分别相等。
void transform(int a[M][N],int t[M][N]);

int main()
{
    int a[M][N],b[M][N],c[M][N];
    for(int i=0;i<M;i++)
        for(int j=0;j<N;j++)
            scanf("%d",&a[i][j]);
    for(int i=0;i<M;i++)
        for(int j=0;j<N;j++)
            scanf("%d",&b[i][j]);
    add(a,b,c);//这个函数执行之后，c数组已经被赋值
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++)
        {
            printf("%3d",c[i][j]);//设置空格，使形式好看
        }
    printf("\n");//做到换行需求
    }

    int d[N][P],r[M][P];
    for(int i=0;i<M;i++)
        for(int j=0;j<N;j++)
            scanf("%d",&d[i][j]);
    product(a,d,r);

    for(int i=0;i<M;i++){
        for(int j=0;j<P;j++){
            printf("%3d ",r[i][j]);
        }
    printf("\n");
    }

    int t[M][N];
    transform(a,t);
    for(int i=0;i<M;i++)
        for(int j=0;j<N;j++)
            scanf("%d",&t[i][j]);
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++)
        {
            printf("%d",t[i][j]);
        }
        printf("\n");
    }
}
void add(int a[M][N],int b[M][N],int c[M][N])//用这个函数，可以不用return
{
    for(int i=0;i<M;i++)
        for(int j=0;j<N;j++)
            c[i][j]=a[i][j]+b[i][j];
}

//着重关注这个
void product(int a[M][N],int d[N][P],int r[M][P])
{
    for(int i=0;i<M;i++)
        for(int j=0;j<N;j++)
            r[i][j]=0;//先设置大框架内所有的原始值，以便区分
    for(int i=0;i<M;i++)
        for(int j=0;j<N;j++)
            for(int k=0;k<P;k++)
                r[i][k]=a[i][j]+d[j][k];//对我需要的框架进行赋值
}
void transform(int a[M][N],int t[M][N])
{
    for(int i=0;i<M;i++)
        for(int j=0;j<N;j++){
            t[j][i]=a[i][j];
        }
}
