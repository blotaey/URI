#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int age,aux=0,avg=0;
	
	cin >> age;
	while(age>0){
		avg += age;
		aux += 1;	
		cin >> age;
	}
	
	cout << fixed;
	cout << setprecision(2) << (double)avg/aux << endl;

	return 0;
}
