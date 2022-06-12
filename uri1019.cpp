#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m,h,sec;
	cin >> n;
	h = n/3600;
	m = n%3600/60;
	sec = n%3600%60;
	
	cout << h << ":" << m << ":" << sec << endl;
	return 0;
}
