#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long 

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,sum;
	ll x;
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> x;
		sum = 0;
		
		for(int j=1; j<x; j++){
			if(x%j==0){
				sum+=j;
			}
		}
		
		if(sum==x) cout << x << " eh perfeito" << endl;
		else cout << x << " nao eh perfeito" << endl;
	}
	
	return 0;
}
