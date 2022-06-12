#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	double m[12][12], sum = 0;
	char o;
	
	cin >> o;
	
	for(int i =0; i < 12; i++){
		for(int j=0; j < 12; j++){
			cin >> m[i][j];
			if(i > j){
				sum += m[i][j];
			}
		}
	}
	
	if(o=='S') cout << fixed << setprecision(1) << sum << endl;
	else cout << fixed << setprecision(1) << sum/66.0 << endl;


	return 0;
}
