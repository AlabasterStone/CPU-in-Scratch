#ifndef _DIODES_H_
#define _DIODES_H_

namespace Circuit
{
    class Diodes
    {
    public:
        // input L < 0.3*Vcc
        // input H > 0.7*Vcc
        static double Vil, Vih;

        // output L < 0.1*Vcc
        // output H > 0.9*Vcc
        static double Vol, Voh;

        static bool InVoltageToLevel(double _voltage);
        static bool OutVoltageToLevel(double _voltage);
        static double LevelToVoltage(bool _level);

        static bool InToLevel(double _v);
        static bool OutToLevel(double _v);
    };
}

#endif