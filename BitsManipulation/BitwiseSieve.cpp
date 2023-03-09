#include<bits/stdc++.h>
using namespace std;
#define mx 103//10^7 nibo
int a[mx/32+1];//globaly howai by default sob 0
std::vector<int> prime;
bool check(int n,int pos)
{
	//see if post bit of n is set or not 
	return (bool)(n&(1<<pos));
}
int set_the_bit(int n,int pos)
{
	return (n|(1<<pos));
}
void BitwiseSieve()
{
	long long i,j;
	for(i=3;i*i<=mx;i+=2)//only odd niye kaj kortesi
	{
       if(check(a[i/32],i%32)==0)
       {
          for(j=i*i;j<mx;j+=i)
          	a[j/32]=set_the_bit(a[j/32],j%32);
       }
	}
	prime.push_back(2);
	for(i=3;i<=mx;i+=2)//just odd cause even is already not prime
		if(check(a[i/32],i%32)==0)
			prime.push_back(i);
	for(i=0;i<prime.size();i++)
		cout<<prime[i]<<' ';
	cout<<endl;

}
int main()
{
    BitwiseSieve();
}