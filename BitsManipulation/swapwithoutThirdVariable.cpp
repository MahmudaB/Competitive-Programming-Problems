//In the name of Almighty Allah

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a=5,b=7;
	a=a^b;//5^7
    b=a^b;//5
    a=a^b;//7

    cout<<a<<' '<<b<<endl;
	return 0;
}