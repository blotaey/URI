#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int x,y;
	
	while(true){
		cin >> x >> y;
		if(x > 0 && y > 0){
			cout << "primeiro" << endl;
		}
		else if(x <0 && y > 0){
			cout << "segundo" << endl;
		}
		else if(x<0 && y<0){
			cout << "terceiro" << endl;
		}
		else if(x==0 or y==0){
			break;
		}
		else{
			cout << "quarto" << endl;
		}
		
	}
	return 0;
}
