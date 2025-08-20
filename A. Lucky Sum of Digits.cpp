#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int count7 = 0;
    int count4 = 0;
    
    // Find the maximum number of 7's such that the remaining is divisible by 4
    for (count7 = n / 7; count7 >= 0; --count7) {
        int remainder = n - 7 * count7;
        if (remainder % 4 == 0) {
            count4 = remainder / 4;
            break;
        }
    }
    
    if (count7 < 0) {
        cout << -1 << endl;
    } else {
        string result = string(count4, '4') + string(count7, '7');
        cout << result << endl;
    }
    
    return 0;
}
