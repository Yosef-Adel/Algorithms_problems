#include <iostream>
#include <map>
#include <vector>
using  namespace std;
map<int ,int> m ;
vector<int> d;
vector<int> find_Count(int key, int v){
    auto it = m.find(key);
    vector<int> myVec;
    for(;it!=m.end();it++){
        if(it->second==v){
            myVec.push_back(it->first);
            }
    }
    return myVec;
}
int find_Count_Of_Two_Collections(int step){
    int count =0;
    for(int i=0;i<d.size();i++){
        vector<int> v = find_Count(i, d[i]+step);
        count=count+v.size();
    }
    return count;
}
int find_Count_Of_Three_Collections(int step){
    int count =0;
    for(int i=0;i<d.size();i++){
        vector<int> v = find_Count(i, d[i]+step);
        for(int j=0;j<v.size();j++){
            vector<int> v2 = find_Count(v[j], d[v[j]]+step);
            count=count+v2.size();
        }
    }
    return count;
}
int main() {
    int n , step, size;
    cin>>n>>step>>size;
    for(int i=0;i<n;i++){
        int v;
        cin>>v;
        d.push_back(v);
        m.insert({i,v});
    }
    if(size==3){
        cout<<find_Count_Of_Three_Collections(step);
    } else {
        cout<<find_Count_Of_Two_Collections(step);
    }



    return 0;
}
