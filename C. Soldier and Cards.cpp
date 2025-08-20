#include <iostream>
#include <queue>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int k1, k2;
    queue<int> q1, q2;
    
    cin >> k1;
    for (int i = 0; i < k1; ++i) {
        int card;
        cin >> card;
        q1.push(card);
    }
    
    cin >> k2;
    for (int i = 0; i < k2; ++i) {
        int card;
        cin >> card;
        q2.push(card);
    }
    
    set<pair<queue<int>, queue<int>>> seen;
    int rounds = 0;
    
    while (!q1.empty() && !q2.empty()) {
        // Check for infinite game
        if (seen.find({q1, q2}) != seen.end()) {
            cout << -1 << endl;
            return 0;
        }
        seen.insert({q1, q2});
        
        int a = q1.front(); q1.pop();
        int b = q2.front(); q2.pop();
        
        if (a > b) {
            q1.push(b);
            q1.push(a);
        } else {
            q2.push(a);
            q2.push(b);
        }
        
        rounds++;
        
        // Safety check to avoid infinite loops
        if (rounds > 1000000) {
            cout << -1 << endl;
            return 0;
        }
    }
    
    cout << rounds << " ";
    if (q1.empty()) {
        cout << 2 << endl;
    } else {
        cout << 1 << endl;
    }
    
    return 0;
}
