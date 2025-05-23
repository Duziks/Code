#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int err[]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768};
int n;
int fir=0;
void work(int x)
{
    if(x==0) {
        printf("0");
        return;
    }
//  if(x==1) {
//      printf("1");
//      return;
//  }
    fir=0;
    for(int i=15;i>=0;i--)
    {
        if(x>=err[i])
        {
//          cout<<"---------"<<i<<endl;
            x-=err[i];
            if(fir==0) {
                if(i==1) printf("2");
                else{
                    printf("2(");
                    work(i);
                    printf(")");}
                }
            else{
                if(i==1) printf("+2");
                else
                {
                    printf("+2(");
                    work(i);
                    printf(")");
                }
            }
            fir=1;
            if(x==0) return;
        }
    }
     
}
int main()
{
    scanf("%d",&n);
    work(n);
    return 0;
}