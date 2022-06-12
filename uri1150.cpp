#include<bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int x, z, soma;
	
	while(cin>>x){
		cin >> z;
		while(z<x){ cin >> z;}
		soma = 0;
		for(int i =1; true; i++){
			soma+= x;
			x++;
			if(soma > z){
				cout << i << endl;
				break;
			}
		}
	
	}

	return 0;
}
