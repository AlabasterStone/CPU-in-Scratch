#!/bin/bash
if [ -f "DigiCrtSim_Alpha" ]; then
  rm "DigiCrtSim_Alpha"
fi

g++ Diodes.h Diodes.cpp MOSFET.h MOSFET.cpp LogicGates.h LogicGates.cpp ALU.h ALU.cpp Copyright.h Copyright.cpp Main.cpp -o DigiCrtSim_Alpha