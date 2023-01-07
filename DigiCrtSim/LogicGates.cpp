#include "LogicGates.h"

namespace Circuit
{
    // same to CMOS
    double LogicGates::Not(double _input)
    {
        if (NMOS(_input))
        {
            cout << "return to [VSS]" << endl;
            return VSS;
        }
        else if (PMOS(_input))
        {
            cout << "return to [VDD]" << endl;
            return VDD;
        }
    }

    double LogicGates::Or(double _a, double _b)
    {
        return CMOS(Nor(_a, _b));
    }

    double LogicGates::Nor(double _a, double _b)
    {
        if (PMOS(_a))
        {
            if (PMOS(_b))
                return VDD;
            else
                return VSS;
        }
        else
            return VSS;
    }

    double LogicGates::And(double _a, double _b)
    {
        return CMOS(Nand(_a, _b));
    }

    double LogicGates::Nand(double _a, double _b)
    {
        if (PMOS(_a))
            return VDD;
        else
        {
            if (PMOS(_b))
                return VDD;
            else
                return VSS;
        }
    }

    double LogicGates::Xor(double _a, double _b)
    {
        return And(Or(_a, _b), Nand(_a, _b));
    }

    double LogicGates::Xnor(double _a, double _b)
    {
        return CMOS(Xor(_a, _b));
    }
}