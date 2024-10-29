
#include <iostream>

#include <string>

#include "ChemicalMachine.h"

int main()
{
    ChemicalMachine machine = ChemicalMachine();

    machine.AddChemical("GREEN");
    machine.AddChemical("BROWN");

    for (std::string chem : machine.ClearMachine())
    {
        std::cout << chem << std::endl;
    }

    std::cout << machine.ChemicalsSize() << std::endl;

    machine.AddChemical("GREEN");
    machine.AddChemical("YELLOW");

    machine.ApplyHeat();

    for (std::string chem : machine.ClearMachine())
    {
        std::cout << chem << std::endl;
    }
}
