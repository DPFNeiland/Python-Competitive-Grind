#include <iostream>

using namespace std;

int main(){
	int M[3][3], maior;
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin >> M[i][j];
			if(i==0 && j==0){
				maior = M[i][j];	
			}
			
			if(maior < M[i][j]){
				maior = M[i][j];
			}
			
		}
	}
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(maior==M[i][j]){
				cout << "-1";
			} else {
				cout << M[i][j];
			}
			cout << " ";
		}
		cout << endl;
	}
		
}
