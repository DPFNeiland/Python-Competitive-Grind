#include <iostream>

using namespace std;

int main(){
	int N, Mapa[100][100], Xi[100], Xf[100], Yi[100], Yf[100], resp = 0;
	bool BoleanMapa[100][100];
	
	cin >> N;
	
	for(int i = 0; i < N; i++){
		cin >> Xi[i], Xf[i], Yi[i], Yf[i];
		for(int j = Xi[i]; j < Xf[i]; j++){
			for(int k = Yi[i]; k < Yf[i]; k++){
				Mapa[j][i] = 1;
			}
		}
	}
	
	for(int i = 0; i < 100; i++){
		for(int j = Xi[i]; j < Xf[i]; j++){
			for(int k = Yi[i]; k < Yf[i]; k++){
				
				if(Mapa[j][i] == 1 && !BoleanMapa[j][k]){
					resp++;
					BoleanMapa[j][k] = true;
				}
			}
		}
	
}
		cout <<resp << endl;
	}	
