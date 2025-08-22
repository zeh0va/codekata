#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    long long sum = 0;
    
    for (int i=0; i<numbers.size(); i++) {
        sum += numbers[i];
    }
    
    if (numbers.size() == 0) {
        return 0;
    }
    
    return (double)sum / numbers.size();
}