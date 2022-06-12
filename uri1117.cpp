#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	double value,sum=0;
	
	while(true){
		cin >> value;
		if(value < 0 or value > 10.0){
			cout << "nota invalida" << endl;
		}
		else{
			sum += value;
			if(sum > 10.0){
				cout <<fixed << setprecision(2) << "media = " << sum/2.0 << endl;
				break;
			}
		}
	}


	return 0;
}
