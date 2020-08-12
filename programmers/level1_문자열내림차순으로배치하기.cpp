#include <string>
#include <vector>
using namespace std;

string solution(string s) {
    for (int i = 0; i < s.length(); i++) {
        for (int j = i+1; j < s.length(); j++) {
            if (s[i] < s[j]) {
                char temp = s[j];
                s[j] = s[i];
                s[i] = temp;
            }
        }
    }
    
    return s;
}
