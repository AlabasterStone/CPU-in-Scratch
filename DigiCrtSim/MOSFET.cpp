#include "MOSFET.h"

namespace Circuit
{
    double MOSFET::Vcc = 5;
    double MOSFET::VDD = 5;
    double MOSFET::VSS = 0;

    double Diodes::Vil;
    double Diodes::Vih;
    double Diodes::Vol;
    double Diodes::Voh;

    double Diodes::LevelToVoltage(bool _level)
    {
        if (_level)
            return MOSFET::VDD;
        else
            return MOSFET::VSS;
    }

    void MOSFET::InitLevel(void)
    {
        Diodes::Vil = 0.3 * MOSFET::Vcc;
        Diodes::Vih = 0.7 * MOSFET::Vcc;
        Diodes::Vol = 0.1 * MOSFET::Vcc;
        Diodes::Voh = 0.9 * MOSFET::Vcc;
    }

    // return Drain
    bool MOSFET::NMOS(double _gate)
    {
        // passed
        if (InVoltageToLevel(_gate))
        {
            cout << "NMOS passed" << endl;
            return 1;
        }
        // not passed
        else
        {
            cout << "NMOS not passed" << endl;
            return 0;
        }
    }

    // return Drain
    bool MOSFET::PMOS(double _gate)
    {
        // not passed
        if (InVoltageToLevel(_gate))
        {
            cout << "PMOS not passed" << endl;
            return 0;
        }
        // passed
        else
        {
            cout << "PMOS passed" << endl;
            return 1;
        }
    }

    double MOSFET::CMOS(double _gate)
    {
        if (NMOS(_gate))
        {
            cout << "return to [VSS]" << endl;
            return VSS;
        }
        else if (PMOS(_gate))
        {
            cout << "return to [VDD]" << endl;
            return VDD;
        }
    }
}