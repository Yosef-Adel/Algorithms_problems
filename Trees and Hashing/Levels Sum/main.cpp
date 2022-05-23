#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int gg=0;
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
void findHight(Node* root,int x, int& h){
    if(!root){
        if(x>h){
            h=x;
        }
        return;
    } else{
        findHight(root->left,x+1,h);
        findHight(root->right,x+1,h);
    }
}
void findMin(Node* root, int l, int v,int& m){
    if(!root){
        return;
    } else {
        if(l==v) {
            if(root->data<m){
                m=root->data;
            }
        }
        findMin(root->left,l+1,v,m);
        findMin(root->right,l+1,v,m);
    }
}
void findSum(Node* root, int l, int v,int& s){
    if(!root){
        return;
    } else {
        if(l==v) {
            s=s+root->data;
            return;
        }
        findSum(root->left,l+1,v,s);
        findSum(root->right,l+1,v,s);
    }
}
int main() {
    int n;
    cin >>n;
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
    Node* root = myVec[0];
    int h=0;
    findHight(root,0,h);

    int V=root->data%h;

    int m =99999;
    findMin(root,0,V,m);

    int step = m%h;
 if(step==0){
     step=1;
 }
 for(int i=0;i<h;i=i+step){
     int s=0;

     findSum(root,0,i,s);
     cout<<s;
 }

    return 0;
}
