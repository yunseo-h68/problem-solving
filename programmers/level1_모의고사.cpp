#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    const int rules[3][10] = {
        {1,2,3,4,5,},
        {2,1,2,3,2,4,2,5},
        {3,3,1,1,2,2,4,4,5,5,}
    };
    int scores[3] = {0,};
    int score_max = 0;
    vector<int> answer;
    
    for (int i = 0; i < answers.size(); i++) {
        if (rules[0][i % 5] == answers[i]) scores[0]++;
        if (rules[1][i % 8] == answers[i]) scores[1]++;
        if (rules[2][i % 10] == answers[i]) scores[2]++;
    }
    
    for (int i = 0; i < 3; i++) {
        if (score_max < scores[i]) 
            score_max = scores[i];
    }
    
    for (int i = 0; i < 3; i++) {
        if (score_max == scores[i]) 
            answer.push_back(i+1);
    }
    
    return answer;
}
