#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int ss=0;
void findNumOfSquares(int x, int y){

    if (x==y){
        ss=ss+1;
        return;
    }
    if(x>y){
        int m = x%y;
        int l = x-m;
        int n = l/y;
        ss=ss+n;
        if(m > 0){
            findNumOfSquares(m, y);
        }
    }
    if( y > x){
        int m = y % x;
        int l = y - m;
        int n = l/x;
        ss = ss +n ;
        if(m > 0){
            findNumOfSquares(x,m);
        }

    }

    return;

}

int main() {
    int x,y ;
    cin >> x>>y;
 findNumOfSquares(x,y);
    cout<< ss;
    return 0;
}
