#include <range/v3/algorithm/all_of.hpp>
#include <range/v3/algorithm/any_of.hpp>
#include <range/v3/algorithm/for_each.hpp>
#include <range/v3/algorithm/none_of.hpp>
#include <range/v3/view/all.hpp>

#include <iostream>
#include <vector>
using std::cout;

auto is_six = [](int i) { return i == 6; };

int
main()
{
    std::vector<int> v{6, 2, 3, 4, 5, 6};
    cout << std::boolalpha;
    cout << "vector: " << ranges::views::all(v) << '\n';

    cout << "vector any_of is_six: " << ranges::any_of(v, is_six) << '\n'; // crash on Cmd+B
    cout << "vector all_of is_six: " << ranges::all_of(v, is_six) << '\n';
    cout << "vector none_of is_six: " << ranges::none_of(v, is_six) << '\n';
}
//[any_all_none_of]]