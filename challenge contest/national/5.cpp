#include<cstring>
#include<cstdio>
#include<iostream>
#include<string>
#include<cmath>
#include<queue>
#include<map>
#include<algorithm>
using namespace std;
struct E{
	int v;
	int nex;
}e[1000005];
int cnt;
int head[1005];
int vis[1005];
int fa[1005];
int n;
string a[1005];
long long ans=0;
void add(int u,int v)
{
	e[++cnt].v=v;
	e[cnt].nex=head[u];
	head[u]=cnt;
}
int cmp(string aa,string bb)
{
	return aa.length()>bb.length();
}
int dfs(int now)
{
	vis[now]=1;
	int tot=1;
	for(int i=head[now];i!=-1;i=e[i].nex)
	{
		int v=e[i].v;
		tot*=dfs(v);
	}
	// cout<<a[now]<<":"<<tot+1<<endl;
	return tot+1;
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	for(int i=1;i<=n;i++)
		head[i]=-1,fa[i]=i;
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			int len;
			if(a[i].length()<a[j].length())
				len=a[i].length();
			else len=a[j].length();
			int o=1;
			for(int k=0;k<len;k++)
				if(a[i][k]!=a[j][k]){
					o=0;
					break;
				}
			if(o){
				add(j,i);
				fa[i]=j;
				break;
			}
		}
	}
	ans=1;
	for(int i=1;i<=n;i++)
	{
		if(!vis[i])
		{
			int now=i;
			while(now!=fa[now])
				now=fa[now];
			ans*=dfs(now);
		}
	}
	cout<<ans<<"\n";
	return 0;
}//唉还能用自己电脑   cacc和csp都是线下  确实，其实这个比赛也可以学校承办，但是我们学校报的人太少了，所以就是线上了6 kk国赛果酱
芯片和显卡有关系吗芯片包括显卡吧还包括cpu 这种国内有自己厂商吗 唉，好像基本没有吧  台湾有捏 台积电 不是造的吗  是的 国内造都难造
明年不是有  50系列显卡吗   好像5090在国内都不一定能买到 6没钱 不过我看好多实验室都需求高算力显卡唉 卡脖子里kkneed
坤丽水吧明天叫我选实验  8点6我八点都不一定能起来  起来打我们学校天梯赛模拟2  Kk乱杀一把nbkkkaonilikaodan考单 我还有这个