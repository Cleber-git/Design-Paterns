#pragma once
#include <string>

class conection
{
public:
    virtual void open()   =0;
    virtual void update() =0;
    virtual void drop()   =0;
    virtual void write( std::string _info, std::string _table ) =0;
};
