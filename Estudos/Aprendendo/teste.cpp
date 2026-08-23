#include <iostream>
#include <vector> // Para vector
#include <algorithm> // min e max
#include <set> // set
#include <map> // map

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

    /*          VECTOR          */
    /*
    vector<int> v(14);
    vector<ll> x(14,1);

    vector<vector<int>> v(10,vector<int>(3));

    v[3][2] = 4;

    v = {0,1,2} v.push_back(3); v = {0,1,2,3}

    v = {0,1,2,3} - v.size() = 4;
    */


    /*          PAIR            */
/*
    // pair<ll, int> p;.
    // p = {valor1, valor2};
    //pair<int, ll>p = {1,0};


    // p.first e p.second


    pair<int, ll> p = {1,0};
    p.f = 2;
    cout << p.f << endl;
    cout << p.s << endl;

    //SAÍDA: 2\n0

*/




    /*          MIN E MAX           */

    /*

    int a = max(2,3);
    int b = min(2,3);
    cout << a << endl;
    cout << b << endl;


\
    */

/*
    int a = max({1,2,3,4});
    int b = min({1,2,3,4});

    cout << a << endl;
    cout << b << endl;
*/
    // 41 5E 6D min(E,D);
/*
    int n; cin >> n;

    vector<pair<int,int>> botas(61, {0,0}); // {E,D}

    for(int i = 0; i < n; i++){

        int tam; cin >> tam;
        char pe; cin >> pe;

        if(pe == 'E') botas[tam].f++;
        else botas[tam].s++;
    }

    int resposta = 0;

    dbg(botas.size());

    for(int i = 0; i < botas.size(); i++){
        resposta += min(botas[i].f,botas[i].s);
    }

    cout << resposta << endl;
    */



    /*              STRING              */

    // string str = "mitocondria";
/*
    string str = "abcde";
    for(int i = 0; i < str.size(); i++) str[i] -= 'a';

    cout << "Depois: ";

    for(int i = 0; i < str.size(); i++)
        cout << (int)str[i] << " ";
    cout << endl;

*/
/*          SET         */
/*
    Complexidade: O(log(tamano de s))
    set<int> s;
    s.insert(5);

    s.erase(t)


    set<int> s;
    for(int i = 0; i < 5; i++) s.insert(i);
    for(int i = 0; i < 5; i++) s.insert(i);

    cout << s.size() << endl;

    s.erase(2);

    cout << s.size() << endl;
*/

/*          MAP         */

/*
    map<string, int> mp;

    map<string, int> mp;
    mp["ribossomo"] = 1;

    cout << mp["mitocrondria"] << " " << mp["ribossomo"] << endl;
    // ele cria a chave mitocrondria como 0, já que inicia com 0
*/

/*          SORT            */
/*
    Ordena todo o vetor v
    sort(v.begin(),v.end());

    Ordena o vetor v de [início, início +n)
    sort(v.begin(), v.begin()+n);

    Ordena o vetor v do amiro elemtno para o menor
    sort(v,begin(), v.end(), greater<>());
    O(nLog(n))

*/
/*          AUTO
    vector<int> v = {0,1,2};

    for(auto i : v) cout << i << " ";
    cout << endl;]


    vector<int> v = {0,1,2};

    for(auto& i: v) i = i + 1;

    for(auto& i : v) cout << i << " ";

    cout << endl;*/

/*
    set<pair<int, char>>s;

    s.insert({2,'a'});
    s.insert({1,'b'});

    for(auto p : s) cout << p.f << " " << p.s << endl;
*/

    map<int, char> m;
    m[2] = 'b';
    m[1] = 'a';

    for(auto i : m) cout << i.f << " " << i.s << endl;

}


