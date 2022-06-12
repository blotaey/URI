#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n[10];
	int num;
	
	cin >> num;
	
	for(int i=0; i<10;i++){
		n[i] = num;
		num *= 2;
	}
	
	for(int i = 0; i<10; i++){
		cout << "N[" << i << "] = " << n[i] << endl;
	}
	

	return 0;
}
