#include "ALU.h"

namespace ALU
{
    bool LogicUnit::Not(bool _input)
    {
        return OutToLevel(LogicGates::Not(LevelToVoltage(_input)));
    }

    bool LogicUnit::Or(bool _a, bool _b)
    {
        return OutToLevel(LogicGates::Or(LevelToVoltage(_a), LevelToVoltage(_b)));
    }

    bool LogicUnit::Nor(bool _a, bool _b)
    {
        return OutToLevel(LogicGates::Nor(LevelToVoltage(_a), LevelToVoltage(_b)));
    }

    bool LogicUnit::And(bool _a, bool _b)
    {
        return OutToLevel(LogicGates::And(LevelToVoltage(_a), LevelToVoltage(_b)));
    }

    bool LogicUnit::Nand(bool _a, bool _b)
    {
        return OutToLevel(LogicGates::Nand(LevelToVoltage(_a), LevelToVoltage(_b)));
    }

    bool LogicUnit::Xor(bool _a, bool _b)
    {
        return OutToLevel(LogicGates::Xor(LevelToVoltage(_a), LevelToVoltage(_b)));
    }

    bool LogicUnit::Xnor(bool _a, bool _b)
    {
        return OutToLevel(LogicGates::Xnor(LevelToVoltage(_a), LevelToVoltage(_b)));
    }

    bool ArithmeticUnit::HalfBitAdder(bool _a, bool _b, bool *_out_carry)
    {
        *_out_carry = LogicUnit::And(_a, _b);
        return LogicUnit::Xor(_a, _b);
    }

    bool ArithmeticUnit::BitAdder(bool _carry, bool _a, bool _b, bool *_out_carry)
    {
        *_out_carry = LogicUnit::Or(LogicUnit::And(_a, _b), LogicUnit::And(LogicUnit::Xor(_a, _b), _carry));
        return LogicUnit::Xor(LogicUnit::Xor(_a, _b), _carry);
    }
}