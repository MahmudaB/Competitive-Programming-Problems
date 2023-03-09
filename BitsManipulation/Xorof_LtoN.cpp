//In the name of Almighty Allah

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l,r;
	cin>>l>>r;
	if((l-1)%4==0)l=l-1;
	else if((l-1)%4==1)l=1;
	else if((l-1)%4==2)l=l-1+1;
	else if((l-1)%4==3)l=0;
	if(r%4==0)r=r;
	else if(r%4==1)r=1;
	else if(r%4==2)r=r+1;
	else if(r%4==3)r=0;
	cout<<(r^l)<<endl;
	return 0;
}