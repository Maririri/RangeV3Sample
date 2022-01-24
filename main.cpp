#include <iostream>
#include <vector>

#include <range/v3/numeric/accumulate.hpp>
#include <range/v3/view/iota.hpp>
#include <range/v3/view/take.hpp>
#include <range/v3/view/transform.hpp>
using std::cout;

int main()
{
    using namespace ranges;
    int sum = accumulate(views::ints(1, unreachable) | views::transform([](int i)
                         {
                             return i * i;
                         }) | views::take(10),
                         0);
    // prints: 385
    cout << sum << '\n';
}
