#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,fat=1;
	cin >> n;
	
	for(int i=1;i<(n-1);i++){
		fat *= (n-i);
	}
	
	cout << fat << endl;

	return 0;
}
