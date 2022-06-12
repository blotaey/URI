#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	double x1,y1;
	cin >> x1 >> y1;
	double x2,y2;
	cin >> x2 >> y2;
	
	double base = x2 - x1;
	double square = pow(base,2.0);
	double base2 = y2 - y1;
	double square2 = pow(base2,2.0);
	
	cout << fixed;
	cout << setprecision(4) << sqrt(square+square2) << endl;
	
	return 0;
}
