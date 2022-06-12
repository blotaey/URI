#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	for(int i=1; i <= n; i++){
		cout << i*1 << " " << pow(i,2) << " " << pow(i,3) << endl;
	}

	return 0;
}
