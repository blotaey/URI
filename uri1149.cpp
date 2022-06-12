#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a,n;
	int soma = 0;
	
	while(cin >> a){
		cin >> n;
		while(n<=0){
			cin >> n;
		}
		for(int i=0;i<n;i++){
			soma+=(a+i);
		}
		
		cout << soma << 0;
		soma = 0;
	}
	

	return 0;
}
