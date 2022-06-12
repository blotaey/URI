#include<bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, a, m,d;
	cin >> n;
	
	a = n/365;
	m = n%365/30;
	d = n%365%30;
	
	cout << a << " anos(s)" << endl;
	cout << m << " mes(es)" << endl;
	cout << d << " dia(s)" << endl;

	return 0;
}
