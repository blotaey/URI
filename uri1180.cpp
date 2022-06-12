#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,y,min=1000,pos=0;
	cin >> n;
	int x[n];
	
	for(int i=0; i < n; i++){
		cin >> y;
		x[i] = y;
	}
	
	for(int i=0; i < n; i++){
		if(x[i] < min){
			min = x[i];
			pos = i;
		}
	}
	
	cout << "Menor valor: " << min << endl;
	cout << "Posicao: " << pos << endl;
	
	
	return 0;
}
