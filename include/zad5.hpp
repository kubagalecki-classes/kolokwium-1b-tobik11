#include "zad1.hpp"

#include <algorithm>
#include <deque>
#include <vector>

// tutaj algorytm liczPopularnych(T begin, T end)

template<typename T>
unsigned liczPopularnych(T a, T b) {
	return  count_if(a, b, [](Artysta temp) {return  temp.gamers > 1000; });
}
