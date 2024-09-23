#include "../include/conectionSqlite.hpp"
#include <string>
#include <iostream>


using namespace std;
conectionSqlite::conectionSqlite(){
    cout << "construtor sqlite" << endl;
}

void conectionSqlite::open(){
    cout << "Abrir conexão sqlite" << endl;
}

void conectionSqlite::drop(){
    cout << "Deletar algo no banco de dados"<< endl;
}

void conectionSqlite::update(){
    cout << "Atualizar algo do banco de dados" << endl;
}

void conectionSqlite::write(string _info, string _table){
    cout << "Sobrecarga de método de escrita no banco de dados" << endl;
}

