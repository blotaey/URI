#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a,b, p=0,i=0;
	int par[5], impar[5];
	
	for(int j=0; j<15; j++){
		cin >> a;
		if(a%2==0){
			par[p] = a;
			p++;
		}
		else{
			impar[i] = a;
			i++;
		}
		
		if(p==5){
			b = 0;
			while(b != 5) { cout << "par[" << b << "] = " << par[b] << endl; b++;}
			p = 0;
		}
		if(i==5){
			b = 0;
			while(b != 5) { cout << "impar[" << b << "] = " << impar[b] << endl; b++;}
		}
		if(j==14){
			b=0;
			while(b < i) {cout << "impar[" << b << "] = " << impar[b] << endl; b++;}
			b=0;
			while(b < p) {cout << "par[" << b << "] = " << par[b] << endl; b++;}
		}
	}
	
	return 0;
}
