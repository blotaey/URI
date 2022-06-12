#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	
	int x,i=0;
	cin >> x;
	
	while(i<6){
		if(x%2!=0){
			cout << x << endl;
			i++;
		}
		x++;
	}

	return 0;
}
