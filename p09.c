#include <stdio.h>
int main ()
{
    int a[100],N,K,i,b=0;
    scanf ("%d %d",&N,&K);
    for (i=0;i<N;i++)
    {
        scanf ("%d",&a[i]);
    }
    for (i=0;i <K;i++)
    {
        b=b+a[i];
    }
    printf ("%d",b);
    return 0;
}
