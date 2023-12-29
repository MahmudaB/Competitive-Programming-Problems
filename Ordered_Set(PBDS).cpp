#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; //sort in ascending order 
 // find_by_order, order_of_key

//typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; //sort in ascending order but it's not unique
//typedef tree<int, null_type, greater<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; //sort in descending order

int main()
{
  pbds s; //1 2 3 10
  s.insert(1);
  s.insert(2);
  s.insert(10);
  s.insert(3);
  s.insert(2);
  
  //finding kth element
  cout<<"s[0] : "<<*s.find_by_order(0)<<endl;
  cout<<"s[2] : "<<*s.find_by_order(2)<<endl;
  cout<<"s[3] : "<<*s.find_by_order(3)<<endl;
  cout<<endl;
  
  // finding number of elements smaller than X
  cout<<"No. of elements smaller than 10: "<<s.order_of_key(10)<<endl;
  cout<<"No. of elements smaller than 3: "<<s.order_of_key(3)<<endl;
  cout<<"No. of elements smaller than 15: "<<s.order_of_key(15)<<endl;
  cout<<endl;
  
  // // Remove elements
	s.erase(1);
	s.erase(11); // element that is not present is not affected
	
	// S contains
	cout << "s = ";
	for (auto i : s)
		cout << i << " ";
	cout << endl;
	
	return 0;
}