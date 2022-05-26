#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector<vector<vector<long long>>> mem;

long long Escaping(int x, int y, int N , int k, vector<pair<int, int>> index) {
   if (k < 0) {
        return 0;
   }
   if (x < 0 || y < 0) {
        return 1;
   }
    if (y > N - 1 || x > N - 1) {
        return 1;
    }
    if (k <= 0) {
        return 0;
  }

    //////// mmm
   if (mem[x][y][k] != -1) {
        return mem[x][y][k];
   }

    long long sum = 0;
    for (int i = 0; i < index.size(); i++) {
        sum = sum + Escaping(x + index[i].first, y + index[i].second, N, k - 1, index);
    }
    mem[x][y][k] = sum;
    return sum;
}


int main() {
    int  N, K, R, x, y;

    cin >> N >> K >> R >> x >> y;

    vector<pair<int , int>> index;

    for (int i = 0; i < R; i++) {
        int x, y;
        cin >> x >> y;
        index.push_back({ x,y });
    }
   
    vector<vector<vector<long long>>> gg(N, vector<vector<long long>>(N, vector<long long>(K +1, -1)));
    mem = gg;
   cout<< Escaping(x, y, N, K, index);


    return 0;
}
