#pragma once
#include "logistics.hpp"


class TeleTransporte : public Logistics
{
private:
    /* data */
public:
    TeleTransporte(/* args */);
    ~TeleTransporte();
    void howWillSend(std::string _pacote) override;
};


