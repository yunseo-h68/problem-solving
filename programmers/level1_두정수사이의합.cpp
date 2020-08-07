#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long big = a >= b ? a : b;
    long small = a >= b ? b : a;
    return (big-small) * (a + b - 1)/ 2 + big;
}
