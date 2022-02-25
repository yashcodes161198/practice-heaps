#include<bits/stdc++.h>
using namespace std;

vector<int> klargest(vector<int> &arr, int k){
    priority_queue<int, vector<int>, greater<int>> minh;
    for(int i=0; i<arr.size(); i++){
        minh.push(arr[i]);
        if(minh.size()>k){
            minh.pop();
        }
    }
    vector<int> ans;
    for(int i=0; minh.size(); i++){
        ans.push_back(minh.top());
        minh.pop();
    }
    return ans;
}

int main(){
vector<int> arr={7, 10, 4, 3, 20, 15};
vector<int> ans=klargest(arr, 3);
for(int i=0; i<ans.size(); i++){
    cout<<ans[i]<<' ';
}
cout<<endl;
// cout<<kthsmallest(arr, 3)<<endl;


return 0;
}