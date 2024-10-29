#include "ChemicalMachine.h"

void ChemicalMachine::AddChemical(std::string chemical)
{
	Chemicals.push_back(chemical);
}

chemVec ChemicalMachine::ClearMachine()
{
	chemVec emptiedContents;

	for (std::string chemical : Chemicals)
	{
		emptiedContents.push_back(chemical);
	}

	Chemicals.clear();

	return emptiedContents;
}

void ChemicalMachine::ApplyHeat()
{
	if (heatMap.contains(Chemicals))
	{
		Chemicals = heatMap[Chemicals];
	}
}

int ChemicalMachine::ChemicalsSize()
{
	return Chemicals.size();
}
