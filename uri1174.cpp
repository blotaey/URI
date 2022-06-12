#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a[100];
	double n;
	
	for(int i =0; i<100; i++){
		cin >> n;
		if(n <= 10){
			cout << fixed;
			cout << setprecision(1) << "A[" << i << "] = " << n << endl;
		}
	}
	

	return 0;
}
