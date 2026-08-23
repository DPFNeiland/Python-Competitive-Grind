#include<iostream>
#include<limits>
#include <string>

using namespace std;

struct Data {
    int dia;
    int ano;
    char mes[20];
};

int main (){
    struct Data d1;

    cout << "Digite um dia: " << endl;
    cin >> d1.dia;

    cout << "Digite um ano: " << endl;
    cin >> d1.ano;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');


    cout << "Digite um mês" << endl;
    cin >> d1.mes;

    cout << d1.dia << "/" << d1.mes << "/" << d1.ano << endl;
}
