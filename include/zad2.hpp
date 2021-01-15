#pragma once

#include "zad1.hpp"

#include <cctype>

// tutaj klasy PopGwiazda, RapGwiazda oraz funkcja stworzArtyste
class PopGwiazda : public Artysta {
public:
	PopGwiazda(const std::string& _pseu, const unsigned&  num) {
		pseudonim = _pseu;
		gamers = num;
	}

	void graj(std::ostream& kk) const {
		kk << "PopGwiazda" << ": " << getPseudonim();
	}

private:
};

class RapGwiazda : public Artysta {
public:
	RapGwiazda(const std::string& _pseu, const unsigned& num) {
		pseudonim = _pseu;
		gamers = num;
	}

	void graj(std::ostream& kk) const {
		kk << "RapGwiazda" << ": " << getPseudonim();
	}
private:
};

Artysta* stworzArtyste(std::string& st) {
	if (isupper(st[0]))
		return new PopGwiazda("BTS", 1234);
	else
		return new RapGwiazda("Ye", 4321);

}
