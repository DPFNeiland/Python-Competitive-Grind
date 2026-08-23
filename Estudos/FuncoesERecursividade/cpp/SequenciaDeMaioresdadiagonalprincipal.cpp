#include <iostream>

using namespace std;

int main(){
	double Numerador = 1, Denominador=2, res = 0; 
	
	for(int i = 1; i < 9999999; i++){
		res = Numerador/(Denominador*Denominador);
		Numerador += i+1;
		Denominador++;  
	}
	cout << res;
}
