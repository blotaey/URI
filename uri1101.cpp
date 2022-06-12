#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int x,y,aux,soma;
	
	while(true){
		cin >> x;
		cin >> y;
		if(x<=0) break;
		if(y<=0) break;
		
		if(x > y){
			aux = x;
			x = y;
			y = aux;
		}
		soma = 0;
		for(int i = x; i <= y; i++){
			cout << i << " ";
			soma += i;
		}
		cout << "Sum=" << soma << endl;
	}
	
	return 0;
}
