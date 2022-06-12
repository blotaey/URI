#include<bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	double r, pi;
	cin >> r;
	
	pi = 3.14159;
	
	cout << fixed;
	cout << setprecision(3) << "VOLUME = " << (4/3.0) * pi * r * r * r << endl;


	return 0;
}
