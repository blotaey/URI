#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t,a=0;
	
	cin >> t;
	
	for(int i = 0; i <1000; i++){
		cout << "N[" << i << "] = " << a << endl;
		a++;
		if(a==t) a = 0;
	}

	return 0;
}
