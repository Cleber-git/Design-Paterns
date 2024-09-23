#include "../include/conectionMysql.hpp"

using namespace std;

conectionMysql::conectionMysql(){
    cout << "Construtor Mysql"<< endl;
}

void conectionMysql::open(){
    cout << "Abrindo banco de dados Mysql" << endl;
}

void conectionMysql::write( string _info, string _table ){
    cout << "Escrevendo algo no banco de dados na tabela: "<< _table << endl;
}

void conectionMysql::update(){
    cout << "Fazendo o update de uma tabela no banco de dados Mysql" << endl;
}

void conectionMysql::drop(){
    cout << "eletando algo de uma tabela no banco de dados Mysql" << endl;
}
