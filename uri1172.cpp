#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	for(int i=0; i < 10; i++){
		cin >> n;
		if(n <= 0) n = 1;
		cout << "X[" << i << "] = " << n << endl;
	}
	
}
