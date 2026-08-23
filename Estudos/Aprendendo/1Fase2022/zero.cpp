#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> resp;
	int aux = 0, sum = 0;
	
	int N;
	
	cin >> N;
	
	for(int i = 0; i < N; i++){
		int num;
		cin >> num;
		if(num == 0){
			resp.pop_back();
			aux--;
			if(aux<0){
				aux = 0;
			}
		}
		else {
			resp.push_back(num);
			aux++;
		}
	}
	
	for(int i = 0; i < aux; i++){
		sum += resp[i];

		
	}
	
	cout << sum << endl;
}
