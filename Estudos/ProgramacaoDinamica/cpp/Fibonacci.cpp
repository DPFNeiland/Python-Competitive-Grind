
#include <iostream>

using namespace std;

#define MAX 999
long long int F[MAX];


long long int Fibonacci(int n){

    if (F[n] < 0) {
        F[n] = Fibonacci(n-1) + Fibonacci(n-2);
    }

    return F[n];
}


int main(){

    int n = 47;

    for (int i = 0; i < MAX; i++){
        F[i] = -1;
    }
    F[0] = 1;
    F[1] = 1;


    for (int i = 0; i < MAX; i++){
        cout << Fibonacci(i) << endl;
    }
}