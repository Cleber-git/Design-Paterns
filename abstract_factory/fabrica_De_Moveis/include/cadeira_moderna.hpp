#pragma once

#include "../include/cadeira.hpp"

class CadeiraModerna: public Cadeira
{
public:
    CadeiraModerna(/* args */);
    ~CadeiraModerna();
    void sentar()override;
};