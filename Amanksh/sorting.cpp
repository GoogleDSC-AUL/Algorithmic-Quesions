#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> s = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
	
	sort(s.begin() ,s.end() );

	for(auto x : s){
		cout << x << " ";
	}


}