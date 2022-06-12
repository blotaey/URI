#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	double n;
	cin >> n;
	
	cout << fixed << setprecision(4) << "N[" << 0 << "] = " << n << endl;
	
	for(int i=1; i < 100;i++){
		n /= 2;
		cout << fixed << setprecision(4) << "N[" << i << "] = " << n << endl;
	}

	return 0;
}
