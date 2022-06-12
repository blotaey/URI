#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,x,y;
	cin >> n;
	
	for(int i=1;i <= n; i++){
		cin >> x >> y;
		
		int sum = 0;
		
		if(x%2 != 0){
			sum += x;
		}else{
			x += 1;
			sum += x;
		}
		
		for(int j = 1; j < y; j++){
			x += 2;
			sum += x;
		}
		
		cout << sum << endl;
	}
	


	return 0;
}
