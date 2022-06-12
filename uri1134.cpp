#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int i,alcohol=0,gasoline=0,diesel=0;
	
	while(true){
		cin >> i;
		if(i==1){
			alcohol++;
		}
		else if(i==2){
			gasoline++;
		}
		else if(i==3){
			diesel++;
		}
		else if(i==4){
			break;
		}
	}
	
	cout << "MUITO OBRIGADO" << endl;
	cout << "Alcool: " << alcohol << endl;
	cout << "Gasolina: " << gasoline << endl;
	cout << "Diesel: " << diesel << endl;
	
	return 0;
}
