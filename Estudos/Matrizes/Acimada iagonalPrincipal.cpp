#include <iostream>
#include <iomanip>

using namespace std;

int main(){	
	double sum=0.0, matriz[12][12];
	
	char O;
	
	cin >> O;
	
	for(int i = 0; i < 12; i++){
		for(int j = 0; j < 12; j++){
			cin >> matriz[i][j];
			if(i+j>11){
				sum += matriz[i][j];
			}
		}
	}
	
	
	if(O=='S'){
		cout << fixed << setprecision(1) << sum << endl;
	} else
		cout << fixed << setprecision(1) << sum/12 << endl;

}
