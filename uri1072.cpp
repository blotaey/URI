#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,x,in=0,out=0;
	cin >> n;
	
	for(int i = 1; i <=n; i++){
		cin >> x;
		if(x >= 10 && x <= 20){
			in++;
		}
		else{
			out++;
		}
	}
	
	cout << in << " in" << endl;
	cout << out << " out" << endl;
	

	return 0;
}
