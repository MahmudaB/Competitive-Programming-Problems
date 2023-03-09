//In the name of Almighty Allah

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,i,j,k,t;
	cin>>n;
	long long a[n+10],one=0,zero=0,sum=0;
	for(i=1;i<=n;i++)
		cin>>a[i];
	for(i=0;i<31;i++)
	{
		one=0,zero=0,k=(1<<i);
		for(j=1;j<=n;j++)
		{
			if(a[j]&k)
				one++;
			else zero++;
		}
		sum+=(one*zero*k);
	}
	cout<<sum<<endl;
	return 0;
}