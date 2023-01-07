#include "Copyright.h"
#include "LogicGates.h"
#include "ALU.h"

using namespace Circuit;
using namespace Copyright;
using namespace ALU;

int main()
{
    CopyrightInfo::ascii();

    // input VCC
    cout << "SET [Vcc]=";
    cin >> MOSFET::Vcc;
    while (MOSFET::Vcc < 3 && MOSFET::Vcc > 18)
    {
        cout << "SET [Vcc]=";
        cin >> MOSFET::Vcc;
    }

    // input VDD
    cout << "SET [VDD]=";
    cin >> MOSFET::VDD;
    while (MOSFET::VDD <= 0)
    {
        cout << "SET [VDD]=";
        cin >> MOSFET::VDD;
    }

    // input VSS
    cout << "SET [VSS]=";
    cin >> MOSFET::VSS;
    while (MOSFET::VSS > 0)
    {
        cout << "SET [VSS]=";
        cin >> MOSFET::VSS;
    }
    MOSFET::InitLevel();

    // test or gate
    bool a, b;
    cin >> a >> b;

    bool carryout = 0;
    cout << ArithmeticUnit::HalfBitAdder(a, b, &carryout) << endl
         << carryout << endl;
}