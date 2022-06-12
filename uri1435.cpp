#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m[100][100];
	while(true){
		cin >> n;
		n+=1;
		if(n==0) break;
		
		for(int i=1;i<=n;i++){
			for(int j=1; j<=n; j++){
				cout << m[i][j] << " ";
			}
			cout << endl;
		}
		
	}
	
	


	return 0;
}
