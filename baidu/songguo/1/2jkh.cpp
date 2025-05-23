#include<stdio.h>
int main() 
{ 
    int n,a[100001],v[100001],c[100001];
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",a[i]);
    }
    printf("\n");
    for(int i=1;i<=n;i++)
    {
        scanf("%d",v[i]);
    }
    printf("/n");
    for(int i=1;i<=n;i++)
    {
        int j=i-1;
        int k=i+1;
        while(j>=1)
        {
            if(a[j]>v[i]) break;
            j--;
        }
        c[j]++;
        while(k<=n)
        {
            if(a[k]>v[i]) break;
            k++;
        }
        c[k]++;
}
    for(int i=1;i<=n;i++)
    {
        printf("%d",c[i]);
    }
    printf("\n");
    
    return 0; 
}