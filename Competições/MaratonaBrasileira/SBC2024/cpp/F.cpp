#include <iostream>

using namespace std;

int main() {

	int N = 0, a = 1, b = 1, aux;
	
	cin >> N;

	for (int i = 0; i < N; i++){
		aux = a;
		a = b;
		b = aux + b;
	}
	
	cout << a << endl;

}
