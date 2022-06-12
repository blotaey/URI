#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int h1,m1,h2,m2,hours,minutes;
	cin >> h1 >> m1 >> h2 >> m2;
	hours = h2 - h1;
	minutes = m2 - m1;
	if(hours < 0){
		hours = 24 + (h2 - h1);
	}
	if(minutes < 0){
		minutes = 60 + (m2 - m1);
	}
	if(h1==h2&&m1==m2){
		cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
	}
	else{
		cout << "O JOGO DUROU " << hours << " HORA(S) E " << minutes << " MINUTO(S)";
	}
	 
	return 0;
}
