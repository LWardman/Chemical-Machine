#pragma once

#include <vector>
#include <string>
#include <map>

typedef std::vector<std::string> chemVec;

class ChemicalMachine
{
public:

	ChemicalMachine(){};

	void AddChemical(std::string chemical);

	chemVec ClearMachine();

	void ApplyHeat();

	int ChemicalsSize();

private:

	chemVec Chemicals;

	std::map<chemVec, chemVec> heatMap =
	{
		{ {"GREEN", "YELLOW"},              {"BROWN"} },
		{ {"BROWN"},               {"BLUE", "ORANGE"} },
		{ {"YELLOW", "ORANGE"},              {"CYAN"} },
		{ {"CYAN"},                 {"RED", "PURPLE"} }
	};
};
