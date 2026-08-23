#include <iostream>

using namespace std;

struct tipo_data{
    int dia;
    int mes;
    int ano;

};

struct tipo_end{
    char rua[60];
    char nr[10];
    char bairro[30];
    char municipio[60];
    char UF[30];
    char CEP[11];
};

struct aluno{
    char matricula[10];
    char nome[50];
    tipo_data datadenascimnento[30];
    char sexo;
    tipo_end endereco[50];
    char curso[30];
};


int main (){
    char asid[20];

    asid = "gogoggo";



}

