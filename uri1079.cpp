#include<bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	double value1,value2,value3,avg=0,a1=0,a2=0,a3=0;
	cin >> n;
	
	for(int i=1; i <= n; i++){
		cin >> value1;
		cin >> value2;
		cin >> value3;
		
		a1 = value1 * 2.0;
		a2 = value2 * 3.0;
		a3 = value3 * 5.0;
		
		avg = (a1 + a2 + a3)/(2.0 + 3.0 + 5.0);
		
		cout << fixed << setprecision(1) << avg << endl;
	
	}
	
	



	return 0;
}
