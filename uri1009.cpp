#include<bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string n;
	cin >> n;
	double x,y,c;
	cin >> x >> y;
	c = x + (y*15)/100;
	
	cout << fixed;
	cout << setprecision(2) << "TOTAL = R$ " << c << endl;
	
	return 0;
}
