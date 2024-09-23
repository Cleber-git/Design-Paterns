#include "include/factory.hpp"

using namespace std;

int main(){
    
    factory fabrica;

    conection* conexaoMysql = fabrica.getConection(factory::MYSQL);
    conection* conexaoSqlite = fabrica.getConection(factory::SQLITE);
    
}
