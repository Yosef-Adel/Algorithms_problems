#include <cmath>
#include <cstdio>
#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
using namespace std;
unordered_map<string,bool> mem;
bool match( int arr [], int i, int time1, int time2 , int n){

    if(i == n && time1 >=0 && time2>=0){
        return true;
    }
    if(time1 <0 || time2 <0){
        return false;
    }
    string  s;
    if(time1>time2){
         s = to_string(i)+ to_string(time1)+ to_string(time2);
    } else{
        s = to_string(i)+ to_string(time2)+ to_string(time1);
    }
    auto  x= mem.find(s);
    if(x!=mem.end()){
        return x->second;
    }
    bool path1,path2;
    int t1,t2;
    t1= time1 - arr[i];
    t2=time2 -arr[i];
   path1 = match(arr,i+1, t1,time2, n );
   path2 = match(arr,i+1, time1, t2,n);

   bool gg= path1 || path2;

    mem.insert({s,gg});

    return path1 ||path2;
}



int main() {
int t;
cin>>t;
vector<bool> Ans;
for(int i=0; i<t; i++){
    int n,k;
    cin>>n>>k;
    int time[n];
    int sum =0;
    for(int i =0; i<n;i++){
        int t;
        cin>>t;
        time[i]=t;
        sum = sum +t;
    }
    if(sum> 2*k){
        Ans.push_back(false);
    } else{
        Ans.push_back(match(time, 0, k,k,n));
    }
  
}
for(int i=0;i<Ans.size();i++){
    cout<<Ans[i]<<endl;
}
    return 0;
}
