//In the name of Almighty Allah

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,cnt=0,flag=0,k,i,t;
	cin>>a>>b>>c;
	for(i=0;i<31;i++)
	{
		int mask=(1<<i);
		if(c&mask)
		{
			if((a&mask)==0 && (b&mask)==0)
				cnt++;
		}
		else
		{
			if((b&mask)!=0)cnt++;
			if((a&mask)!=0)cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}