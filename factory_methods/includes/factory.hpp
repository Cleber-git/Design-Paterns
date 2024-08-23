#include "logistics.hpp"

class factory
{
private:

    factory(/* args */);
    static logistics *instance;
public:
    enum class object {
        MARITIMO,
        AEREO,
        TERRESTRE,
        SUBTERREO
    };  
    ~factory();
    static logistics &getInstance(object TIPO);
};


