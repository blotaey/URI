#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	for(int i = 1; i <= n; i++){
		if(i%2==0){
			int power = pow(i,2);
			cout << i << "^2 = " << power << endl;
		}
	}

	return 0;
}
