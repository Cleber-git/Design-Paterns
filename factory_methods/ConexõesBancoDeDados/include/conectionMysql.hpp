#pragma once 
#include "conection.hpp"

#include <iostream>
#include <string>

class conectionMysql: public conection
{
public:
    conectionMysql(/* args */);
    ~conectionMysql();
    void open()   override;
    void update() override;
    void drop()   override;
    void write( std::string _info, std::string _table ) override;
};
