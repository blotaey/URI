#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,t;
	long long fib[61];
	fib[0] = 0;
	fib[1] = 1;
	cin >> n;
	
	for(int j = 2; j<=60; j++){
		fib[j] = fib[j-2] + fib[j-1];
	}
	
	for(int i = 0; i < n; i++){
		cin >> t;
		cout << "Fib(" << t << ") = " << fib[t] << endl;
	}

	return 0;
}

