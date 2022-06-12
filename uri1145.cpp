#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	 cin.tie(NULL);
	
	int x,y;
	cin >> x >> y;
	
	int n = 1;
	
	for(int i = 1; i <=y; i++){
		if(n==x){
			cout << i << endl;
			n = 1;
		}
		else{
			cout << i << " ";
			n++;
		}
	
	}



	return 0;
}
