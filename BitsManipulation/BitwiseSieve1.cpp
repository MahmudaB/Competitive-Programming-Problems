//In the name of Almighty Allah

#include<bits/stdc++.h>
using namespace std;
#define mx 103
int a[mx/32+1];
vector<int>prime;
bool check(int n,int pos)
{
	return (bool)(n&(1<<pos));
}
int set_the_bit(int n,int pos)
{
	return (n|(1<<pos));
}
void BitwiseSieve()
{
	long long i,j;
	for(i=3;i*i<=mx;i+=2)
	{
		if(check(a[i>>5],(i&31))==0)
		{
			for(j=i*i;j<mx;j+=i)
				a[j>>5]=set_the_bit(a[j>>5],(j&31));
		}
	}
	prime.push_back(2);
	for(i=3;i<=mx;i+=2)
		if(check(a[i>>5],(i&31))==0)
			prime.push_back(i);
	for(i=0;i<prime.size();i++)
		cout<<prime[i]<<' ';
	cout<<endl;
}
int main()
{
    BitwiseSieve();
	return 0;
}