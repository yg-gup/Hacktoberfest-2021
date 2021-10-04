#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    int n;
    while(T>0)
    {
        scanf("%d",&n);
        int a[n];
        long sum=0;
        double mean;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        mean=(double)sum/n;
     int flag=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==mean)
            {
                printf("%d\n",i+1);
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("Impossible\n");
        }
        T--;
    }
    return 0;
}
