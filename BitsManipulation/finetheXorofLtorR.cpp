//In the name of Almighty Allah

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q,i,l,r,cnt=0,flag=0,k,t;
	cin>>n>>q;
	int a[n+10],b[n+10]={0};
	for(i=1;i<=n;i++)
		cin>>a[i],b[i]=(b[i-1]^a[i]);
	while(q--)
	{
		cin>>l>>r;
		cout<<(b[r]^b[l-1])<<endl;
	}

	return 0;
}