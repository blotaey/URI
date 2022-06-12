#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int x;
	
	while(true){
		cin >> x;
		if(x==0) break;
		
		int sum = 0;
		
		if(x%2==0) sum += x;
		else sum += ++x;
		
		for(int i=0; i<4;i++){
			x += 2;
			sum += x;
		}
		
		cout << sum << endl;
	}
	
	return 0;
}
