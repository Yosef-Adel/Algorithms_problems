#include <cmath>
#include <cstdio>
#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
using namespace std;
vector<vector<long long>> mem;
long long Mario(long long x, long long y ) {

    if (x == 0 && y == 0) 
    {
        return  1;
    }
    if (x < 0 || y < 0) {
        return 0;
    }
   if (mem[x][y] != -1) {
        return mem[x][y];
   }
    long long sum = Mario(x - 1, y) + Mario(x, y - 1);
    mem[x][y] = sum;
    return  sum;

}



int main() {
    long long x, y;
    cin >> x>> y;
    vector<vector<long long>> gg( x +1, vector<long long>(y +1, -1));
    mem = gg;
    cout<< Mario(x, y);


    return 0;
}
