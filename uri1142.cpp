#include<bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,aux=0;
	cin >> n;
	
	for(int i=1; i<=n;i++){
		if(i==1){
			aux = i;
		}
		
		cout << aux << " " << aux+1 << " "<< aux+2 << " PUM" << endl;
		
		aux+= 4;
	}


	return 0;
}
