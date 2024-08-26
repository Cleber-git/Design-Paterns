#pragma once
#include "logistics.hpp"

class Terrestre : public Logistics
{
private:
    Terrestre(/* args */);
    static Terrestre *instance;
    Terrestre(const Terrestre&) = delete;
public:
    ~Terrestre();
    void howWillSend(std::string _pacote) override;
    static Terrestre &getInstance();

};


