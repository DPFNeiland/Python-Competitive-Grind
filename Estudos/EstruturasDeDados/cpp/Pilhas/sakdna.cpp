#include <iostream>

using namespace std;

int main(){

    double A = 1, B = 1, aux = 0;

    for(int i = 0; i < 10; i++){
        aux = A;
        A+=B;
        B=aux;

    }

    cout << A / B << endl;


}
