#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define f first
#define s second

#define dbg(x) cout << #x << " = " << x << endl;
typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

/* <tipo_retorno> <nome_funcao> (<tipo_param1> param1){


}

int c;

int soma(int a,int b){
    int c = a + b;

    if(true ){
        int c;
    }
    return c;
}

void incrementa(int & x) {
    x++;
}
// min (1,2) = 1, min("aa","ab") = "aa"
// abs(-2) = 2
// swap(a,b)
*/

void append(int v[5], int & n,int x){
    v[n] = x;
    n++;
}

void reverter(int v[5], int n){

    for(int i = 0; 2*i < n; i++){
        swap(v[i], v[n - 1 - i]);
    }
}

int f(int n) {
    if(n == 0) return 1;

    return n * f(n-1);

}

float fibonacci( float n) {
    if(n == 0 || n == 1 ) return 1;
    return fibonacci(n-1) + fibonacci( n - 2);

}

int main(){ _
/*
    int a, b, x = 1;
    // cin >> a >> b;

    incrementa(x);

    cout << x << endl;


    int n = 0;
    int v[5] = {};
    append(v, n, 3);
    append(v, n, 1);
    append(v, n, 2);
    append(v, n, 5);
    append(v, n, 4);


    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    reverter(v,5);

    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    cout << endl;
*/
    int N;

    cin >> N;

    cout << fibonacci(N) << endl;

    cout << "Proporção áurea entre N e N-1: " << fibonacci(N)/fibonacci(N-1) << endl;


}
