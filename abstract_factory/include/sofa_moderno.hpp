#pragma once

#include "../include/sofa.hpp"

class SofaModerno: public Sofa
{
private:
    /* data */
public:
    SofaModerno(/* args */);
    ~SofaModerno();
    void deitar()override;
};
