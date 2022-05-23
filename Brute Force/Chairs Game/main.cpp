#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <bits/stdc++.h>
using  namespace  std;
int mx =0;

void recFunc(vector<string> mainVec, int n, int i, vector<string> editedVec,vector<int> indexes) {
    if(i>2){
        for(int j=0;j<i-1;j++){
            if(editedVec[j]==editedVec[j+1]){
                return;
            }
        }
    }
    if (editedVec.size() == n) {
        if(editedVec[0]==editedVec[n-1]){
            return;
        }
        queue<string> q;
        stack<string > st;
        int m=n/2;
        if(n%2 !=0){
            for(int j=0;j<m;j++){
                st.push(editedVec[j]);
            }
            for(int j=m+1;j<n;j++){
                q.push(editedVec[j]);
            }
        }
        if(n%2==0){

            for(int j=0;j<m;j++){
                st.push(editedVec[j]);
            }
            for(int j=m;j<n;j++){
                q.push(editedVec[j]);
            }
        }
        for(int j=0;j<m;j++){
            string sst= st.top();
            string  sq= q.front();
            if(sst==sq){
                return;
            }
            st.pop();
            q.pop();
        }
        mx++;
        return;
    }
    for (int j = 0; j < n; j++) {
        if(!indexes.empty()){
            vector<int>::iterator it;
            it = std::find (indexes.begin(), indexes.end(), j);
            if(it!= indexes.end()){
                continue;
            }
        }
            editedVec.push_back(mainVec[j]);
            indexes.push_back(j);
            recFunc(mainVec, n, i + 1, editedVec,indexes);
            editedVec.pop_back();
            indexes.pop_back();
    }
    }

int main() {
    int n;
    cin>>n;
    vector<string> v;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    vector<string> e;
    vector<int> i;
    if(v.size()==1){
        cout<<1;
        return 0;
    }
    recFunc(v,n,0,e,i);
    cout<<mx;
    return 0;
}
