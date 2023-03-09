//In the name of Almighty Allah

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[9]={2,1,2,5,7,7,6,5,6};
	int Xor=0;
	for(int i=0;i<9;i++)
		Xor=Xor^a[i];
	cout<<Xor<<endl;//1

	int b[9]={1,1,4,5,7,7,6,5,6};
	 Xor=0;
	for(int i=0;i<9;i++)
		Xor=Xor^b[i];
	cout<<Xor<<endl;
	return 0;
}