#include<iostream>

using namespace std;

int main(){
	int K, N, resp;

	cin >> N;
	cin >> K;	

	resp = (K-N+1)/N;
	
	cout << resp << endl;

	
	return 0;
}
