#include <iostream>

using namespace std;

int main(){
	int M[3][3];
	
	string resp;
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin>> M[i][j];
		}
	}
	
	if((M[0][0]+M[0][1]+M[0][2])==(M[1][0]+M[1][1]+M[1][2]) && (M[0][0]+M[0][1]+M[0][2])==(M[2][0]+M[2][1]+M[2][2])){
		if((M[0][0]+M[1][0]+M[2][0])==(M[0][1]+M[1][1]+M[2][1]) && (M[0][0]+M[1][0]+M[2][0])==(M[0][2]+M[1][2]+M[2][2])){
			if((M[0][0] + M[1][1] + M[2][2]) == (M[2][0]+M[1][1]+M[0][2])){
				resp = "SIM";
			} else {
				resp = "NAO";
			}
		} else {
				resp = "NAO";
			}
	} else {
		resp = "NAO";
	} 
	
	cout << resp << endl;
	

}
