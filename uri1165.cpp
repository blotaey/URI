#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,aux;
	ll x;
	cin >> n;
	
	for(int i=0; i < n; i++){
		cin >> x;
		aux = 0;
		
		for(int j=1; j <= x; j++){
			if(x%j==0){
				aux += 1;
			}	
		}
		
		if(aux > 2) cout << x << " nao eh primo" << endl;
		else cout << x << " eh primo" << endl;
	}

	return 0;
}
