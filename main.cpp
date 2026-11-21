#include <string>
#include <vector>

void is_prime() {
    int n = 97;
    bool prime = (n > 1);
    for (int d = 2; d * d <= n; ++d) {
        if (n % d == 0) { prime = false; break; }
    }
    (void)prime;
}

void product_range() {
    int acc = 1;
    for (int i = 1; i <= 5; ++i) acc *= i;
    (void)acc;
}

void square_value() {
    int x = 12;
    int square = x * x;
    (void)square;
}

void leading_zeros() {
    unsigned int n = 0b000101u;
    int zeros = 0;
    while ((n & 1u) == 0u) { zeros += 1; n >>= 1; }
    (void)zeros;
}

extern "C" int lucid_orbit();
extern "C" void frost_spruce();
extern "C" void subtle_willow();

int main() {
    is_prime();
    product_range();
    square_value();
    leading_zeros();
    frost_spruce();
    subtle_willow();
    return lucid_orbit();
}
