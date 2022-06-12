#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int x;
	
	while(true){
		cin >> x;
		if(x==0) break;

		for(int i=1; i<=x; i++){
			cout << i;
			if(i==x){
				cout << endl;
			}
			else{
				cout << " ";
			}
		}
	}


	return 0;
}
