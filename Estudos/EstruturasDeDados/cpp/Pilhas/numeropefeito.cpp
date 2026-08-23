#include <iostream>

using namespace std;

int main(){
    int N, aux, resp=0;

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> aux;

        resp = 0;
        for(int i = 1; i <= aux/2; i++){
            if(aux%i==0){
                resp+=i;
            }
        }

        if(aux == resp){
            cout << aux << " eh perfeito" << endl;
        } else {
            cout << aux << " nao eh perfeito" << endl;
        }
    }

}
