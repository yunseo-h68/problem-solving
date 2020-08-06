#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<bool> primeTable(n+1, true);

    for (int i = 2; i * i <= n; i++) {
        if (primeTable[i]) {
            for (int j = i * i; j <= n; j += i) {
                primeTable[j] = false;
            }
        }
    }
    
    for (int i = 2; i <= n; i++) {
        if (primeTable[i]) answer++;
    }
    
    return answer;
}
