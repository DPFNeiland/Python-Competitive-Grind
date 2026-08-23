#include <iostream>
#include <vector> // Para vector
#include <algorithm> // min e max
#include <set> // set

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define f first
#define s second

#define dbg(x) cout << #x << " = " << x << endl;
typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
/*
    int N; cin >> N;
    set<string>joias;

    for(int i = 0; i < 5; i++) {
        string joia;
        cin >> joia;
        joias.insert(joia);
    }

    cout << joias.size() << endl;
*/
    set<string>joias;
    string joia;

    while(cin >> joia){
        joias.insert(joia);
    }

    cout << joias.size() << endl;

}
