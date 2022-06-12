#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int x,y,sum=0,aux=0;
	cin >> x >> y;
	
	if(x>y){
		aux = y;
		y = x;
		x = aux;
	}
	
	for(int i = x; i <= y; i++){
		if(i%13!=0){
			sum += i;
		}
	}
	
	cout << sum << endl;
	
	return 0;
}
