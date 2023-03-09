//In the name of Almighty Allah

#include<bits/stdc++.h>
using namespace std;
#define mx 104
int p[mx];
vector<int>prime;
void Sieve()
{
	int i,j;
	memset(p,-1,sizeof(p));
	for(i=3;i*i<=mx;i+=2)
	{
		if(p[i]==-1)
		{
			for(j=i*i;j<mx;j+=i)
				p[j]=0;
		}
	}
	prime.push_back(2);
	for(i=3;i<mx;i+=2)
		if(p[i]==-1)
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