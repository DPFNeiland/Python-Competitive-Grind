#include <iostream>

using namespace std;

int main(){
    int N, M, X, Y, K, aux, valorx = 0, valory = 0, resp = 0;

    cin >> N >> M >> X >> Y >> K;
    for(int i = 0; i < K; i++){
        cin >> aux;

        if(aux == 3){
            valory++;
        }

        if(aux == 4){
            valory--;
        }


        if(aux == 1){
            valorx++;
        }

        if(aux == 2){
            valorx--;
        }

        if(valorx == X && valory == Y){
            resp++;
        }

        if(valorx == X && valory == Y-1){
            resp++;
        }
         if(valorx == X && valory == Y+1){
            resp++;
        }

        if(valorx == X+1 && valory == Y){
            resp++;
        }

        if(valorx == X-1 && valory == Y){
            resp++;
        }
    }

    cout << resp << endl;
}
