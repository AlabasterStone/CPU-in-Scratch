#ifndef _ALU_H_
#define _ALU_H_

#include "LogicGates.h"
using namespace Circuit;

namespace ALU
{
    class ArithmeticUnit : public LogicGates
    {
    public:
        static bool HalfBitAdder(bool _a, bool _b, bool *out_carry);
        static bool BitAdder(bool _carry, bool _a, bool _b, bool *_out_carry);
    };

    class LogicUnit : public LogicGates
    {
    public:
        static bool Not(bool _input);
        static bool Or(bool _a, bool _b);
        static bool Nor(bool _a, bool _b);
        static bool And(bool _a, bool _b);
        static bool Nand(bool _a, bool _b);
        static bool Xor(bool _a, bool _b);
        static bool Xnor(bool _a, bool _b);
    };
}

#endif