#include <iostream>
#include <algorithm>
// 	sort(arr, arr + o tamanho dele);
#include<vector>
// vector<int> resp;
// resp.pop_back();
// resp.push_back(num);

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
	vector<int> Amigo, AmigoTempo;
	int N, amigo;
	vector<char> Registro;;
	char registro;
	
	
	cin >> N;
	
	for(int i = 0; i <  N; i++){
		cin >> registro >> amigo;
		
		Registro.push_back(registro);
		Amigo.push_back(amigo);
	}
	
	for(int i = 0; i <  N; i++){

		if(Registro[i]=='R'){
			AmigoTempo[i] = 0;
		}

	}
	
}



