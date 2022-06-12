#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n[20],x;
	
	for(int i=19; i > -1; i--){
		cin >> x;
		n[i] = x;
	}
	
	for(int i=0; i<20; i++){
		cout << "N[" << i << "] = " << n[i] << endl;
	}
	
	return 0;
}
