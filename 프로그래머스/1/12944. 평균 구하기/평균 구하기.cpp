#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    
    double temp = 0;
    
    for(int i = 0; i < arr.size(); i++)
    {
        temp += arr[i];
        
    }
    
    answer = temp / arr.size();
    
    return answer;
}