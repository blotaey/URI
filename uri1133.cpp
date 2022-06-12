#include<bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int x,y,aux=0;
	cin >> x >> y;
	
	if(x<y){
		aux = y;
		y = x;
		x = aux;
	}

	for(int i=x+1; i < y; i++){
		if(i%5==2 or i%5==3){
			cout << i << endl;
		}
	}
	return 0;
}
