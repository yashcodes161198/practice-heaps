#include<bits/stdc++.h>
using namespace std;

vector<int> klargest(vector<int> &arr, int k){
    priority_queue<int, vector<int>, greater<int>> minh;
    for(int i=0; i<k; i++){
        minh.push(arr[i]);
    }
    for(int i=0; i<arr.size()-k; i++){
        arr[i]=minh.top();
        minh.pop();
        minh.push(arr[i+k]);
    }
    for(int i=0; i<k; i++){
        arr[arr.size()-k+i]=minh.top();
        minh.pop();
        // minh.push(arr[i+k]);
    }
    // vector<int> ans;
    // for(int i=0; minh.size(); i++){
    //     ans.push_back(minh.top());
    //     minh.pop();
    // }
    return arr;
}

int main(){
vector<int> arr={6, 5, 3, 2, 8, 10, 9};
vector<int> ans=klargest(arr, 4);
for(int i=0; i<ans.size(); i++){
    cout<<ans[i]<<' ';
}
cout<<endl;
// cout<<kthsmallest(arr, 3)<<endl;


return 0;
}