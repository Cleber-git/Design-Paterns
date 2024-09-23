#include "../include/factory.hpp"

using namespace std;

factory::factory(/* args */)
{
    cout << "Aberta a classe que contém o método de fábrica" << endl;
}

factory::~factory()
{
}

conection *factory::getConection(type _type){
    switch (_type)
    {
    case MYSQL:
        return new conectionMysql();
        break;
    case SQLITE:
        return new conectionSqlite();
    default:
        break;
    }
}
