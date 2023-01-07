#ifndef _MOSFET_H_
#define _MOSFET_H_

#include "Diodes.h"
#include <iostream>
using namespace std;

namespace Circuit
{
    class MOSFET : public Diodes
    {
    public:
        MOSFET(void);

        // CMOS Vcc 3V-18V
        static double Vcc;

        // VDD=5V
        // VSS=0V
        static double VDD, VSS;

        static void InitLevel(void);

        // if passed
        static bool NMOS(double _gate);
        // if passed
        static bool PMOS(double _gate);
        // voltage
        static double CMOS(double _gate);
    };
}

#endif