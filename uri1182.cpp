#include<bits/stdc++.h>
using namespace std;

#define endl "\n"


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	double m[12][12],sum=0;
	int c;
	char t;
	
	cin >> c;
	cin >> t;
	
	for(int i =0; i < 12; i++){
		for(int j = 0; j < 12; j++){
			cin >> m[i][j];
			if(j==c){
				sum+=m[i][j];
			}
		}
	}
	
	if(t=='S') cout << fixed << setprecision(1) << sum << endl;
	else if(t=='M') cout << fixed << setprecision(1) << sum/12.0 << endl;
	

	return 0;
}
