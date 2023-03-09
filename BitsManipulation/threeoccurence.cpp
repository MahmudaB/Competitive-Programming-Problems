//In the name of Almighty Allah

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,cnt=0,m=0,t;
	cin>>n;
	int a[n+10];
	for(i=1;i<=n;i++)
		cin>>a[i];
	for(i=0;i<31;i++)
	{
		cnt=0;
		for(j=1;j<=n;j++)
		{
			if(a[j]&(1<<i))
				cnt++;
		}
		if(cnt%3==1)
			m+=(1<<i);//power of 2 == (1<<i)
	}
	cout<<m<<endl;
	return 0;
}