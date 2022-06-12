#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,value;
	cin >> n;
	
	for(int i=1; i<=n; i++){
		cin >> value;
		if(value%2==0){
			if(value==0){
				cout << "NULL" << endl;
			}
			else if(value > 0){
				cout << "EVEN POSITIVE" << endl;
			}
			else{
				cout << "EVEN NEGATIVE" << endl;
			}
		}
		else{
			if(value > 0){
				cout << "ODD POSITIVE" << endl;
			}
			else{
				cout << "ODD NEGATIVE" << endl;
			}
		}
	}



	return 0;
}
