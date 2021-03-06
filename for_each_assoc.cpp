//
// Created by Maria Baburina on 19.12.19.
//

#include <iostream>
#include <map>
#include <range/v3/algorithm/for_each.hpp>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>
using std::cout;
using std::string;

auto print = [](int i) { cout << i << ' '; };
// must take a pair for map types
auto printm = [](std::pair<string, int> p) {
    cout << p.first << ":" << p.second << ' ';
};

int
main()
{
    cout << "set:           ";
    std::set<int> si{1, 2, 3, 4, 5, 6};
    ranges::for_each(si, print);

    cout << "\nmap:           ";
    std::map<string, int> msi{{"one", 1}, {"two", 2}, {"three", 3}};
    ranges::for_each(msi, printm);

    cout << "\nunordered map: ";
    std::unordered_map<string, int> umsi{{"one", 1}, {"two", 2}, {"three", 3}};
    ranges::for_each(umsi, printm);

    cout << "\nunordered set: ";
    std::unordered_set<int> usi{1, 2, 3, 4, 5, 6};
    ranges::for_each(usi, print);
    cout << '\n';

}