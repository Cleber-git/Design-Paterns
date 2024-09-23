#include "logistics.hpp"

class Factory
{
private:

    Factory(/* args */);
    static Logistics *instance;
public:
    enum class object {
        MARITIMO,
        AEREO,
        TERRESTRE,
        SUBTERREO,
        TELETRANSPORTE
    };  
    ~Factory();
    static Logistics &getInstance(object TIPO);
};


