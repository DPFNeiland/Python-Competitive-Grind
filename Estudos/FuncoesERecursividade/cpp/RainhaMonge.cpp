#include <iostream>
#include <cmath>

using namespace std;

long long int Calcular_Grao(int n){
    int quant = 0;

    return pow(2,n) - 1;
}


int main(){

    int N = 64;

    cin >> N;

    cout << "Grãos: " << Calcular_Grao(N) << endl; 

    return 0;
}