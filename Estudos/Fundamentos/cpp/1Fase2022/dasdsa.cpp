#include <iostream>
#include <iomanip>
#include <algorithm>
// 	sort(arr, arr + o tamanho dele);
// vector<int> resp;
// resp.pop_back();
// resp.push_back(num);

// cin.ignore(numeric_limits<streamsize>::max(), '\n');


// Tabela Ascii 97 - 122 minúsculos
/*
	a = 97
	e = 101
	i = 105
	o = 111
	u = 117

*/

using namespace std;

int main(){

	int N, gramas;
	double preco, menor = 100000000.0;
	
	cin >> N;
	
	// 24 reais por quilo
	// gramas - preco
	// 1000 - x
	// x = preco*1000/gramas
	
	for(int i = 0; i < N; i++){
		cin >> preco >> gramas;
		
		if(preco*1000/gramas < menor){
			menor = preco*1000/gramas;
		}
	}
	
	cout << fixed << setprecision(2) << menor << endl;

}




