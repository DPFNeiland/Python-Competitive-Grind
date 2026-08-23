#include <iostream>
#include <algorithm>
//     sort(arr, arr + o tamanho dele);
#include<vector>
// vector<int> resp;
// resp.pop_back();
// resp.push_back(num);

#include<limits>
// cin.ignore(numeric_limits<streamsize>::max(), '\n');


// Tabela Ascii 97 - 122 minúsculos
/*
    a = 97
    e = 101
    i = 105
    o = 111
    u = 117

*/

using namespace std;

int main(){
    int N, K, acum = 0, resp, aux = 0, maior = -1;
    bool enq = true;

    cin >> N >> K;

    int m[K];

    for(int i = 0; i < K; i++){
        cin >> m[i];
        acum += m[i];
    }

    while(enq){
        resp = acum / N;

        aux = 0;
        for(int i = 0; i < K; i++){
            aux = m[K] / resp;
            if(maior < aux){
                maior = aux;
            }

        }
        cout << aux;
        resp --;

        if(aux == N){
            enq = false;
        }
    }

    cout << maior << endl;

}



