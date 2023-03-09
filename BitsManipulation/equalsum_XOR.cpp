//In the name of Almighty Allah
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,cnt=0,flag=0,k,t;
	cin>>n;
	for(i=0;i<=n;i++)
		if(n+i==(n^i))
			cnt++;
	cout<<cnt<<endl;
	return 0;
}*/
//In the name of Almighty Allah

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,zero=0;
	cin>>n;
	while(n)
	{
		if((n&1)==0)zero++;
		n>>=1;
	}
	cout<<(1<<zero)<<endl; //power of two (2^zero)
	return 0;
}