#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void recFunc(int n, int m , int arr[], string s, int i){
    if(s.length()==m){
        cout<<s<<endl;

        return;
    }
    if(i==m){
        return;
    }
    for(int j=0;j<n;j++){
        int v[n];
        for(int x=0; x<n;x++){
            v[x] = arr[x];
        }
        if(v[j] <=0){
            recFunc(n,m,v,s,i+1);
        } else{
            v[j]= v[j] -1;
            recFunc(n,m,v,s+ to_string(j),i+1);

        }
    }


}



int main() {
    int n,m;
    cin>> n>>m;
    int* v = new int {n};
    for(int i=0; i<n;i++){
        int x;
        cin>>x;
        v[i]=x;
    }
    recFunc(n,m,v,"",0);
    return 0;
}
