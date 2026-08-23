#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int M;
	
	double average = 0, sum=0, matriz[12][12];
	
	char O;
	
	cin >> M >> O;
	
	for(int i = 0; i < 12; i++){
		for(int j = 0; j < 12; j++){
			cin >> matriz[i][j];
		}
		sum += matriz[i][j];
	}
	
	
	if(O=='S'){
		cout << fixed << setprecision(0) << sum << endl;
	} else
		cout << fixed << setprecision(1) << sum/12 << endl;

}
