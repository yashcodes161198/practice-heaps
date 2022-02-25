#include<bits/stdc++.h>
using namespace std;

vector<int> klargest(vector<int> &arr, int k, int x){
    priority_queue<pair<int,int>> maxh;
    // for(int i=0; i<arr.size(); i++){

    // }
    for(int i=0; i<arr.size(); i++){
        maxh.push({abs(x-arr[i]), arr[i]});
        if(maxh.size()>k){
            maxh.pop();
        }
    }
    vector<int> ans;
    for(int i=0; maxh.size(); i++){
        ans.push_back(maxh.top().second);
        maxh.pop();
    }
    return ans;
}

int main(){
vector<int> arr={10, 2, 14, 4, 7, 6};
int x=5 , k=3;
vector<int> ans=klargest(arr, k, x);
for(int i=0; i<ans.size(); i++){
    cout<<ans[i]<<' ';
}
cout<<endl;
// cout<<kthsmallest(arr, 3)<<endl;


return 0;
}