#include <iostream>
#include <vector>
#include <algorithm>

class DivByThreeCounter {
private:
    int sum;
    int count;

public:
    DivByThreeCounter() : sum(0), count(0) {}

    void operator()(int num) {
        if (num % 3 == 0) {
            sum += num;
            count++;
        }
    }

    int get_sum() const { return sum; }
    int get_count() const { return count; }
};

int main() {
    std::vector<int> numbers = { 4, 1, 3, 6, 25, 54 };

    DivByThreeCounter counter;

    std::for_each(numbers.begin(), numbers.end(), std::ref(counter));

    std::cout << "get_sum() = " << counter.get_sum() << std::endl;
    std::cout << "get_count() = " << counter.get_count() << std::endl;

    return 0;
}