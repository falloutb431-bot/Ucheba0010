#include <iostream>

template <typename T>
class SumAndCountDivBy3 {
private:
    T sum;
    size_t count;

public:
    SumAndCountDivBy3() : sum{}, count(0) {}

    void operator()(const T& value) {
        if (value % 3 == 0) {
            sum += value;
            ++count;
        }
    }

    T get_sum() const {
        return sum;
    }

    size_t get_count() const {
        return count;
    }
};

int main() {
    int values[] = { 4, 1, 3, 6, 25, 54 };
    SumAndCountDivBy3<int> counter;

    for (int v : values) {
        counter(v);
    }

    std::cout << "get_sum() = " << counter.get_sum() << "\n";
    std::cout << "get_count() = " << counter.get_count() << "\n";

    return 0;
}