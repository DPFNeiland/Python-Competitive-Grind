#include <iostream>

using namespace std;

int main(){
	int N, peso = 0, maior = -999999999;
	
	cin >> N;
		
	int M[N][N];
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			cin >> M[i][j];
		}
	}	
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			peso = 0;
			
			for(int k = 0; k < N; k++){
				peso += M[k][j];
				peso += M[i][k];
			}
			peso = peso - (2*M[i][j]);
		
			if(maior<peso){
				maior = peso;
			}
			
		}
	}
	
	cout << maior << endl;
}


