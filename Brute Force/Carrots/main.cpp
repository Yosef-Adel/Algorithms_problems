#include <iostream>
#include <vector>
using  namespace  std;
int mx =-100000;

void recFunc(vector<vector<int>> mtr,vector<vector<bool>> isUsed, int n, int x, int y,  int currMax ){
    isUsed[x][y] = true;

    currMax = currMax + mtr[x][y];
    if(x==2  && y==0){

        if(currMax > mx)
        {
            mx =currMax;
        }
    } else{
        if(x-1>=0 && y-1>=0 &&!isUsed[x-1][y-1])
            recFunc(mtr,isUsed,n,x-1,y-1,currMax);

        if(x+1<n &&  y+1<n && !isUsed[x+1][y+1])
            recFunc(mtr,isUsed,n,x+1,y+1,currMax);
        if(x+1<n &&  y-1>=0 &&!isUsed[x+1][y-1])
        recFunc(mtr,isUsed,n,x+1,y-1,currMax);
        if(x-1>=0 &&  y+1<n &&!isUsed[x-1][y+1])
        recFunc(mtr,isUsed,n,x-1,y+1,currMax);


        if(x-1>=0 && !isUsed[x-1][y])
            recFunc(mtr,isUsed,n,x-1,y,currMax);

        if(x+1<n && !isUsed[x+1][y])
            recFunc(mtr,isUsed,n,x+1,y,currMax);

    }
    isUsed[x][y]= false;
}


int main() {
    vector<vector<int>> mtr;
    vector<vector<bool>> isUsed;
    for(int i=0;i<3;i++){
      vector<int> p;
      vector<bool> b;
      mtr.push_back(p);
      isUsed.push_back(b);
       for(int j=0;j<3;j++){
          int e;
          cin >> e;
          mtr[i].push_back(e);
          isUsed[i].push_back(false);

       }

    }

   recFunc(mtr, isUsed,3,0,0,0);
   cout<<mx;
    return 0;
}
