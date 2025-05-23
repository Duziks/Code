#include <bits/stdc++.h>
using namespace std;
int main()
{
	for(int i = 1000; i <= 3000; i++)
	{
		int j = i; //j作为i的替身
		int flag = 0;
		while(j != 0)
		{
			int b = sqrt(j);
			int f = 0;
			for(int a = 2; a <= b; a++)
			{
				if(j % a == 0)
				{
					f = 1;
					break;
				}
			}
			if(f == 1 || j == 1)
			{
				flag = 1;
				break;
			}
			if(j >= 1000)
			{
				j = j % 1000;
				continue;
			}
			if(j >= 100)
			{
				j = j % 100;
				continue;
			}
			if(j >= 10)
			{
				j = j % 10;
				continue;
			}
			j = 0;
		}
		if(flag == 0) cout << i << endl;
	}
	return 0;
}