//In the name of Almighty Allah

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,cnt=0,flag=0,k,t;
	cin>>n;
	while(n)
	{
		n=n&(n-1);//turn of last set bits;
		cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}