#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> flowers(n);
    for (int i = 0; i < n; i++) {
        cin >> flowers[i];
    }
    
    sort(flowers.begin(), flowers.end());
    
    long long min_val = flowers[0];
    long long max_val = flowers[n-1];
    long long diff = max_val - min_val;
    
    long long count_min = 0;
    for (int i = 0; i < n; i++) {
        if (flowers[i] == min_val) {
            count_min++;
        } else {
            break;
        }
    }
    
    long long count_max = 0;
    for (int i = n-1; i >= 0; i--) {
        if (flowers[i] == max_val) {
            count_max++;
        } else {
            break;
        }
    }
    
    long long ways;
    if (min_val == max_val) {
        ways = (long long) n * (n - 1) / 2;
    } else {
        ways = count_min * count_max;
    }
    
    cout << diff << " " << ways << endl;
    
    return 0;
}
