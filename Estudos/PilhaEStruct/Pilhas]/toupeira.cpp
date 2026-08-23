#include <iostream>
#include <vector>

using namespace std;


int main(){

    int S, T, aux1, aux2, P, N, resp = 0;
    bool temounaotemcaminho = false;

    cin >> S >> T;

    vector<vector<int >> X(T);


    for(int i = 0; i < T; i++){
        cin >> aux1 >> aux2;

        X[aux1].push_back(aux2);
        X[aux2].push_back(aux1);
    }

    cin >> P;

    vector<vector<int >> Passeios(P);

    for(int i = 0; i < P; i++){
        cin >> N;
        Passeios[i].reserve(N);
        for(int j = 0; j < N; j++){
            cin >> aux1;
            Passeios[i].push_back(aux1);
        }

    }

    for(int i = 0; i < P; i++){
        for(int j = 0; j < N; j++){

            temounaotemcaminho = false;
            for(int k = 0; k < S; k++){
                if(X[Passeios[i][j]][k] == Passeios[i][j+1]){
                    temounaotemcaminho = true;
                }

            }

            if(temounaotemcaminho){
                resp++;
            }

        }
    }

    cout << resp << endl;

}
