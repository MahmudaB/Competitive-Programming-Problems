//In the name of Almighty Allah

#include<bits/stdc++.h>
using namespace std;
#define mx 102
int p[mx];
vector<int>prime;
void Sieve()
{
	int i,j;
	memset(p,-1,sizeof(p));
	for(i=2;i*i<=mx;i++)
	{
		if(p[i])
		{
			for(j=i*i;j<mx;j+=i)
				p[j]=0;
		}
	}
	for(i=2;i<=mx;i++)
		if(p[i])
			prime.push_back(i);
	for(i=0;i<prime.size();i++)
		cout<<prime[i]<<' ';
	cout<<endl;
}
int main()
{
	Sieve();
	return 0;
}