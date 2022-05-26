#include <cmath>
#include <cstdio>
#include <queue>
#include <unordered_map>
#include <iostream>
#include <algorithm>
using namespace std;
unordered_map<string,bool> mem;


bool isAValidName(string firstName, string secondName, string Name , int x, int y, int z){
    if(z==Name.length() && x==firstName.length() && y == secondName.length()){
        return true;
    }
    if(Name[z] != firstName[x] && Name[z] != secondName[y] ){
        return false;
    }
    string  s= to_string(x)+ to_string(y)+ to_string(z);
    auto  ser= mem.find(s);

    if( ser != mem.end()){

        return ser->second;
    }
    bool  valid = false;

    if(Name[z] == firstName[x]){
        if (isAValidName(firstName,secondName,Name, x+1,y,z+1)){
            valid= true;

        }
    }
    if(Name[z] == secondName[y]){
        if (isAValidName(firstName,secondName,Name, x,y+1,z+1)){
            valid= true;

        }
    }
    mem.insert({s,valid});
    return valid;
}

void  display(vector<string> Names, string firstName, string secondName){

    for(int i=0; i<Names.size(); i++){
            if(Names[i].length() < firstName.length()+ secondName.length() || Names[i].length()>  firstName.length()+ secondName.length()  ){
                cout<< 0<<endl;
            } else{
               mem.clear();
                bool m = isAValidName(firstName,secondName,Names [i],0,0,0  );
                cout<<m<<endl ;
            }

    }

    return;


}

int main() {
    int n;
    cin>>n;
    string  firstName;
    string  secondName;
    cin>> firstName>> secondName;
    vector<string> names;
    for(int i=0; i<n;i++){
        string  k;
        cin>>k;
        names.push_back(k);
    }

    display(names,firstName,secondName);

//    vector< vector<int>> mem (firstName.length() +1, vector<int> (secondName.length() +1, -1));
//
//  cout<<  isAValidName(firstName,secondName,"AAAA",0,0,0 , mem );


    return 0;
}
