#pragma once
#include "logistics.hpp"

class maritimo: public logistics
{
private:
    maritimo(/* args */);
    static maritimo *instance;
    maritimo(const maritimo&) = delete;
public:
    ~maritimo();
    void howWillSend(std::string _pacote) override;
    static maritimo &getInstance();

};
