#include "zad1.hpp"

#include <exception>
#include <vector>

// tutaj funkcja stworzZespol
std::vector<Artysta> stworzZespol(int a, const std::string& st) {
	std::vector<Artysta> tren;
	if (st.size() != a) {
		//std::cout << "aaaaa" << std::endl;
		throw std::logic_error("nothing");
		return tren;
	}
	else {
		//std::cout << "bbbbb" << std::endl;
		for (int i = 0; i < a; i++)
			tren.push_back(Artysta(st, i + 1));
	}
	return tren;
}