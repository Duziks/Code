#include <bits/stdc++.h>
using namespace std;
int n;
int a[1005];
int tot[1005];
int cnt;
int ans;
int main()
{
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	for(int i = 1; i <= n; i++)
	{
		tot[a[i]]++;
		if(tot[a[i]] > cnt || tot[a[i]] == cnt && a[i] < ans)
		{
			ans = a[i];
			cnt = tot[a[i]];
		}
	}
	cout << ans << endl;
	return 0;
}	