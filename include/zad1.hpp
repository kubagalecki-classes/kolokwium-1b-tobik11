#pragma once

#include "catch.hpp"

#include <ostream>
#include <sstream>
#include <string>

// tutaj klasa Artysta

class Artysta {
public:

	Artysta() : pseudonim("Anonim") {}
	Artysta(const std::string& _pseu, unsigned _gam) : pseudonim(_pseu), gamers(_gam) {}

	void graj(std::ostream& kk) const {
		kk << "[" << pseudonim << "]:[" << gamers << "]" << std::endl;
	}

	const std::string& getPseudonim() const {
		return pseudonim;
	}

	unsigned getSluchacze() const {
		return gamers;
	}

private:
	unsigned gamers = 0;
	std::string pseudonim;
};