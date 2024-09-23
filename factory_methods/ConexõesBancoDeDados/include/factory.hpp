#pragma once
#include "conection.hpp"
#include "conectionMysql.hpp"
#include "conectionSqlite.hpp"

#include <iostream>
#include <string>

class factory
{
private:
    /* data */
public:
    factory(/* args */);
    ~factory();
    enum type{
        MYSQL,
        SQLITE
    };

    conection *getConection(type _type);
};


