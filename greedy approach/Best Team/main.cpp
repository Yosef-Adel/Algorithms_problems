#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
vector<int> playersRating;
vector<vector<int>> teams;
int mxRating =-9999999;
int mnRating=99999999999;
void divideTeams(){
    if(playersRating.size()==0){
        return;
    }
    sort(playersRating.begin(), playersRating.end());
    int last = playersRating.size()-1;
    int first = 0;

    for(; first <playersRating.size();first++){

        int mx = playersRating[last];
        int mn = playersRating[first];

      last = last-1;
      
        if(mx+mn > mxRating){
            mxRating = mx+mn;
        }
        if(mx+mn < mnRating){
            mnRating=mx+mn;
        }
    }




}

int main() {

int N;
 cin >> N;

  for(int i =0 ; i<N; i++){
      int x;
        cin>>x;
        playersRating.push_back(x);

  }
    divideTeams();

   cout<< mxRating- mnRating;


    return 0;
}
