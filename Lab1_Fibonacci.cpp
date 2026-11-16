
#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;

long long fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    return fib(n - 1) + fib(n - 2);
}

int main() {
    int values[] = {0, 1, 2, 5, 10, 20, 30, 40, 45, 50};

    for (int n : values) {
        auto start = steady_clock::now();

        long long result = fib(n);

        auto end = steady_clock::now();

        double elapsed = duration<double>(end - start).count();

        cout << "fib(" << n << ") = " << result;
        cout << " | Time: " << elapsed << " seconds" << endl;
    }

    return 0;
}
