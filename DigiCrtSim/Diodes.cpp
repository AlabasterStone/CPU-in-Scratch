#include "Diodes.h"

namespace Circuit
{
    bool Diodes::InVoltageToLevel(double _voltage)
    {
        if (_voltage <= Diodes::Vil)
            return 0;
        else if (_voltage >= Vih)
            return 1;
    }

    bool Diodes::OutVoltageToLevel(double _voltage)
    {
        if (_voltage <= Vol)
            return 0;
        else if (_voltage >= Voh)
            return 1;
    }

    bool Diodes::InToLevel(double _v)
    {
        InVoltageToLevel(_v);
    }

    bool Diodes::OutToLevel(double _v)
    {
        OutVoltageToLevel(_v);
    }
}
