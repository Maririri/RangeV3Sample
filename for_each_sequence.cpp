//
// Created by Maria Baburina on 19.12.19.
//


#include <array>
#include <deque>
#include <forward_list>
#include <iostream>
#include <list>
#include <queue>
#include <range/v3/algorithm/for_each.hpp> // specific includes
#include <stack>
#include <vector>
using std::cout;

auto print = [](int i) { cout << i << ' '; };

int
main()
{
    cout << "vector:   ";
    std::vector<int> v{1, 2, 3, 4, 5, 6};
    ranges::for_each(v, print); // 1 2 3 4 5 6

    cout << "\narray:    ";
    std::array<int, 6> a{1, 2, 3, 4, 5, 6};
    ranges::for_each(a, print);

    cout << "\nlist:     ";
    std::list<int> ll{1, 2, 3, 4, 5, 6};
    ranges::for_each(ll, print);

    cout << "\nfwd_list: ";
    std::forward_list<int> fl{1, 2, 3, 4, 5, 6};
    ranges::for_each(fl, print);

    cout << "\ndeque:    ";
    std::deque<int> d{1, 2, 3, 4, 5, 6};
    ranges::for_each(d, print);
    cout << '\n';
}