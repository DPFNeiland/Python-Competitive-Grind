#include <iostream>
#include <algorithm>
// 	sort(arr, arr + o tamanho dele);
#include<vector>
// vector<int> resp;
// resp.pop_back();
// resp.push_back(num);

#include<limits>
// cin.ignore(numeric_limits<streamsize>::max(), '\n');


// Tabela Ascii 97 - 122 minúsculos
/*
	a = 97
	e = 101
	i = 105
	o = 111
	u = 117

*/


// OBI OU URI
using namespace std;

int main(){
	
	int N;
	
	cin >> N;
	
	string palavra;
	
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	
	getline(cin, palavra);



	for(int i = 0; i < palavra.length(); i++){
		
		if(i == 0){
					if(i+3<palavra.length()){
			
		
		if((palavra[i] == 79 && palavra[i+1] == 66 && palavra[i+3] == 32) || (palavra[i] == 79 && palavra[i+1] == 66 && (i+3>palavra.length()))){
			palavra[i+2] = 73;
		}
		
		if((palavra[i] == 85 && palavra[i+1] == 82 && palavra[i+3] == 32) || (palavra[i] == 85 && palavra[i+1] == 82 && (i+3>palavra.length()))){
			palavra[i+2] = 73;
		}}
		else {
		if(palavra[i] == 79 && palavra[i+1] == 66 ){
			palavra[i+2] = 73;
		}
		if(palavra[i] == 85 && palavra[i+1] == 82 ){
			palavra[i+2] = 73;
		}}
		} else {
			if(i+3<palavra.length()){
			
		
		if((palavra[i-1] == 32 && palavra[i] == 79 && palavra[i+1] == 66 && palavra[i+3] == 32) || (palavra[i] == 79 && palavra[i+1] == 66 && (i+3>palavra.length()))){
			palavra[i+2] = 73;
		}
		
		if(palavra[i-1] == 32 &&(palavra[i] == 85 && palavra[i+1] == 82 && palavra[i+3] == 32) || (palavra[i] == 85 && palavra[i+1] == 82 && (i+3>palavra.length()))){
			palavra[i+2] = 73;
		}}
		else {
		if(palavra[i-1] == 32 &&palavra[i] == 79 && palavra[i+1] == 66 ){
			palavra[i+2] = 73;
		}
		if(palavra[i-1] == 32 &&palavra[i] == 85 && palavra[i+1] == 82 ){
			palavra[i+2] = 73;
		}}		
		}

		}

	
	cout << palavra << endl;
	
}




