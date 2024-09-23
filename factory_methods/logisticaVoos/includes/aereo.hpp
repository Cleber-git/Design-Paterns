#pragma once
#include "logistics.hpp"

class Aereo:public Logistics
{
private:
    Aereo(/* args */);
    static Aereo *instance;
    Aereo(const Aereo&) = delete;
public:
    ~Aereo();
    void howWillSend(std::string _pacote) override;
    static Aereo &getInstance();
};

