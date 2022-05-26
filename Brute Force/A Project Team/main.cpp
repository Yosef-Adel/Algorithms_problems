#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void func(string arr, int n , string s , int  i){
    if(s.length()==n){

        cout <<s <<endl;
        return;
    } else if (i >= arr.size()){
        return;
    }
    string x = s+ arr[i];

    func(arr, n , x, i +1);
    func(arr,n,s,i +1 );

}



int main() {
    int i ,n;
    cin>> i>>n;
    string s;
    for(int j=0;j<i;j++){
        char c;
        cin>>c;
        s= s+c;
    }
    sort(s.begin(), s.end());
  func(s,n,"",0 );
    return 0;
}
