#include<stdio.h>
int main()
{
    int n,m,i,hc;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n && i<=m;i++)
    {
        if(n%i==0 && m%i==0)
        {
        hc=i;
        
        }
       
    }
    
     printf("%d %d",hc);
        return 0;
}
