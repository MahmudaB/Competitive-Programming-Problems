//In the name of Almighty Allah

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n>>i;
	bool mask=(n&(1<<i));
	cout<<(mask==1?"YES":"NO")<<endl;
	return 0;
}