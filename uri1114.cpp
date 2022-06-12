#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int v, password = 2002;
	
	while(true){
		cin >> v;
		if(v==password){
			cout << "Acesso Permitido" << endl;
			break;
		}
		cout << "Senha Invalida" << endl;
	}

	return 0;
}
