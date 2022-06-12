#include<bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,x,y;
	cin >> n;
	
	while(true){
		
		if(n==0) break;

		cin >> x >> y;
		double x1 = x;
		double y1 = y;
		
		if(x != 0 && y == 0){
			cout << "divisao impossivel" << endl;
		}
		else{
			cout << fixed << setprecision(1) << x1 / y1 << endl;
		}
		
		n--;
	}

	return 0;
}
