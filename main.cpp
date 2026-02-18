#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = { 4, 1, 3, 6, 25, 54 };

    int sum = 0;
    int count = 0;

    std::for_each(numbers.begin(), numbers.end(),
        [&sum, &count](int num) {
            if (num % 3 == 0) {
                sum += num;
                count++;
            }
        });

    std::cout << "get_sum() = " << sum << std::endl;
    std::cout << "get_count() = " << count << std::endl;

    return 0;
}