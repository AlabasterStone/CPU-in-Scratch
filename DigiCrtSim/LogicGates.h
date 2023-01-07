#ifndef _LOGICGATES_H_
#define _LOGICGATES_H_

#include "MOSFET.h"

namespace Circuit
{
    class LogicGates : public MOSFET
    {
    public:
        LogicGates(void);
        static double Not(double _input);
        static double Or(double _a, double _b);
        static double Nor(double _a, double _b);
        static double And(double a, double _b);
        static double Nand(double _a, double _b);
        static double Xor(double _a, double _b);
        static double Xnor(double _a, double _b);
    };
}

#endif