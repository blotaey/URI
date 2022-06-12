#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int x,y;
	
	while(true){
		cin >> x >> y;
		if(x==y) break;
		
		if(x>y){
			cout << "Decrescente" << endl;
		}
		else{
			cout << "Crescente" << endl;
		}
	}
	return 0;
}
