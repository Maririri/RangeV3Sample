//
// Created by Maria Baburina on 19.12.19.
//


#include <array>
#include <iostream>
#include <range/v3/algorithm/is_sorted.hpp> // specific includes
#include <vector>
using std::cout;

int
main()
{
    cout << std::boolalpha;
    std::vector<int> v{1, 2, 3, 4, 5, 6};
    cout << "vector:   " << ranges::is_sorted(v) << '\n';

    std::array<int, 6> a{6, 2, 3, 4, 5, 6};
    cout << "array:    " << ranges::is_sorted(a) << '\n';
}