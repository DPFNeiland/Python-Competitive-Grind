#include <iostream>
#include <algorithm>
// 	sort(arr, arr + o tamanho dele);
#include<vector>
// vector<int> resp;
// resp.pop_back(num); // tira o último valor do array
// resp.push_back(num); // cria
#include<string>

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
	string palavra;
	vector<char> resp;
	int aux = 0, aux1 = 0, aux2 = 0;
	
	cin >> palavra;
	
	aux = palavra[0];

	
	for(int i = 0; i < palavra.length(); i++){
		if(palavra[i] == 97 || palavra[i] == 101 || palavra[i] == 105 || palavra[i] == 111 || palavra[i] == 117){
			resp.push_back(palavra[i]);
		} else {
			
			// Passo 1: 
			resp.push_back(palavra[i]);
			
			
			// Passo 2: 

			aux = palavra[i];
			if(aux == 98 || aux == 99){
				resp.push_back(97);

			} else if(aux == 100 || aux == 102 || aux == 103){
				resp.push_back(101);
				
			} else if(aux == 104 || (aux>=106 && aux<=108)){
				resp.push_back(105);
				
			} else if(aux == 112 || aux == 110|| aux== 109 || aux == 113 || aux == 114){
				resp.push_back(111);
			} else {
				resp.push_back(117);
			}
					

			// Passo 3:
			if(palavra[i] == 122){
				resp.push_back(palavra[i]);
			} else if((palavra[i]+1) == 97 || (palavra[i]+1) == 101 || (palavra[i]+1) == 105 || (palavra[i]+1) == 111 || (palavra[i]+1) == 117){
				resp.push_back(palavra[i]+2);
			} else {
				resp.push_back(palavra[i]+1);
			}
		}
	}
	
	
	
	for(int i = 0; i < resp.size(); i++){
		cout << resp[i];
	}
	
	cout << endl;

}



