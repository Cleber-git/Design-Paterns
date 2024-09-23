#pragma once 
#include "conection.hpp"

class conectionSqlite: public conection
{
private:
    /* data */
public:
    conectionSqlite(/* args */);
    ~conectionSqlite();
    void open()   override;
    void update() override;
    void drop()   override;
    void write( std::string _info, std::string _table ) override;
};
