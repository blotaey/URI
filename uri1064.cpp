#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int i, pos=0;
	double sum=0, value;
	
	for(i=1;i<=6;i++){
		cin >> value;
		if(value > 0){
			pos++;
			sum += value;
		}
	}
	
	cout << pos << " valores positivos" << endl;
	cout << fixed;
	cout << setprecision(1) << sum/pos << endl;



	return 0;
}
