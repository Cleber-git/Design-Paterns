#pragma once
#include "logistics.hpp"

class terrestre : public logistics
{
private:
    terrestre(/* args */);
    static terrestre *instance;
    terrestre(const terrestre&) = delete;
public:
    ~terrestre();
    void howWillSend(std::string _pacote) override;
    static terrestre &getInstance();

};


