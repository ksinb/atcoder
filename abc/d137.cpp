#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int N, M;

std::priority_queue<int> q;

int main() {
    cin >> N >> M;
    vector<vector<int>> jobs(M);
    for (int i = 0; i < N; ++i) {
        int a, b;
        cin >> a >> b;
        if (M < a) {
            continue;
        }
        jobs[M-a].push_back(b);
    }

    long long int ans = 0;
    for (int i = M-1; i >= 0; i--) {
        for (int b: jobs[i]) {
            q.push(b);
        }
        if (!q.empty()) {
            ans += q.top();
            q.pop();
        }
    }
    
    cout << ans << endl;
}