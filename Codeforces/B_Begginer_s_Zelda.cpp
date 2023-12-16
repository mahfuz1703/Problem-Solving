#include <stdio.h>
#include <vector>

using namespace std;

int main() {
  int t;
  scanf("%d", &t);
  for (int i = 0; i < t; i++) {
    int n;
    scanf("%d", &n);
    vector<vector<int>> adj(n + 1);
    for (int j = 1; j < n; j++) {
      int u, v;
      scanf("%d %d", &u, &v);
      adj[u].push_back(v);
      adj[v].push_back(u);
    }
    int cnt = 0;
    for (int u = 1; u <= n; u++) {
      if (adj[u].size() == 1) {
        int v = adj[u][0];
        adj[u].clear();
        adj[v].erase(remove(adj[v].begin(), adj[v].end(), u), adj[v].end());
        cnt++;
      }
    }
    printf("%d\n", cnt);
  }
  return 0;
}
