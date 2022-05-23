#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;
struct Node {
    int data;
    Node  * left, * right;
};
Node* newNode(int d){
    Node* node = new Node();
    node->data=d;
    node->left=NULL;
    node->right=NULL;
    return node;
}

void treeCountAndSum(Node* root , int& count, int& s){
    if(!root){
        return;
    } else{
        count=count+1;
        s=s+root->data;
        treeCountAndSum(root->left,count,s);
        treeCountAndSum(root->right,count,s);
    }
}
void magic(Node* root, int& n, int m, set<string>& mySet){
    if(!root){
        return;
    } else{
        int s=0;
        int count=0;
        treeCountAndSum(root,count,s);
        if(count>m){
            string ss= to_string(count) + to_string(s);
            mySet.insert(ss);
            n++;
        }
        magic(root->left,n,m,mySet);
        magic(root->right,n,m,mySet);
    }
}
int main() {
    int n,m;
    cin >>n>>m;
    vector<Node*> myVec;
    for(int i=0;i<n;i++){
        int v;
        cin>>v;
        Node* node = newNode(v);
        myVec.push_back(node);
    }
    int n2;
    cin>>n2;
    for(int i=0;i<n2;i++){
        char t;int p;int c;
        cin>>t>>p>>c;
        if(t=='L'){
            myVec[p]->left=myVec[c];
        } else if(t=='R'){
            myVec[p]->right=myVec[c];
        }
    }
    set<string> mySet;
    Node* root = myVec[0];
    int k=0;
    magic(root,k,m,mySet);
    if(mySet.size()<k ){
        cout<< 1;
    } else{
        cout<< 0;
    }
    return 0;
}
