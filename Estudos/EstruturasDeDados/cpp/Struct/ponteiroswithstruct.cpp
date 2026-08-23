#include <iostream>

using namespace std;

struct pessoa{
    string nome;
    int idade;

};

void func(pessoa *pont){
    cout << endl << endl << "Nome: " << (*pont).nome << endl;
    cout << "Nome: " << pont->nome << endl;
}


int main(){
    pessoa p, *pont;
    p.idade = 20;
    p.nome="Maria";
    pont = &p;
    func(&p);

}
