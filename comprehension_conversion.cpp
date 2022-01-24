//
// Created by Maria Baburina on 19.12.19.
//


#include <iostream>
#include <vector>

#include <range/v3/range/conversion.hpp>
#include <range/v3/view/for_each.hpp>
#include <range/v3/view/iota.hpp>
#include <range/v3/view/repeat_n.hpp>
using std::cout;

int main()
{
    using namespace ranges;
    auto vi = views::for_each(views::ints(1, 6),
                              [](int i) { return yield_from(views::repeat_n(i, i)); }) |
              to<std::vector>();
    // prints: [1,2,2,3,3,3,4,4,4,4,5,5,5,5,5]
    cout << views::all(vi) << '\n';
}