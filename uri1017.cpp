#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int h,kmh;
	cin >> h >> kmh;
	
	double l = h * kmh;
	
	cout << fixed << setprecision(3) << l/12 << endl;

	return 0;
}
