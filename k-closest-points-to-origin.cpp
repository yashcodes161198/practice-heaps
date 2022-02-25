#include<bits/stdc++.h>
using namespace std;

vector<int> klargest(vector<vector<int>> &arr, int k){
    priority_queue<pair<int,int>> maxh;
    // unordered_map<int, int> mp;
    // for(int i=0; i<arr.size(); i++){
    //     mp[arr[i]]++;
    // }
    
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[0].size(); j++){
            maxh.push({i+j, arr[i][j]});
        }
        while(maxh.size()>k){
            maxh.pop();
        }
    }
    // for(auto itr=mp.begin(); itr!=mp.end(); itr++){
    //     maxh.push({itr->first, itr->second});
    //     if(maxh.size()>k){
    //         maxh.pop();
    //     }
    // }
    vector<int> ans;
    for(int i=0; maxh.size(); i++){
        ans.push_back(maxh.top().second);
        maxh.pop();
    }
    return ans;
}

int main(){
vector<vector<int>> arr={{3,3},{5,-1},{-2,4}};
int x=5 , k=2;
vector<int> ans=klargest(arr, k);
for(int i=0; i<ans.size(); i++){
    cout<<ans[i]<<' ';
}
cout<<endl;
// cout<<kthsmallest(arr, 3)<<endl;


return 0;
}