#include "zad1.hpp"

#include <exception>
#include <vector>

// tutaj funkcja stworzZespol
std::vector<Artysta> stworzZespol(int a, const std::string& st) {
	if (st.size() != a) {
		std::logic_error("error");
	}
	else {
		std::vector<Artysta> tren;
		for (int i = 0; i < a; i++)
			tren.push_back(Artysta(st, i + 1));
	}
}