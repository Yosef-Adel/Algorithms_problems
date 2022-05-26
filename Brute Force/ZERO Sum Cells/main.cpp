#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include<numeric>
#include <iostream>
#include <algorithm>
using namespace std;
int mx=0;
void  func(vector<int> enter ,vector<int> v, int i,int d,int sm,map <int,bool> mp){

if(v.size()>mx && sm==0){
    mx= v.size();
}
    if(i>=d){
        return;
    }
    func(enter, v, i+1,d,sm,mp);
 if(!mp[enter[i]])
 {
     mp[enter[i]]=1;
     v.push_back(enter[i]);
     func(enter, v, i+1,d,sm+enter[i],mp);
     v.pop_back();
     mp[enter[i]]=1;
 }

}

int main() {

int n, m ;
 cin >> n>>m;
 vector<int> v;
    map <int,bool> mp;
int size = n*m;
for(int i=0; i <size; i++){
    int k;
    cin>>k;
    v.push_back(k);
    mp[k]=0;
}
    vector<int> g;


    func(v,g,0,size,0,mp);
    cout<< mx;

    return 0;
}
