#include<bits/stdc++.h>
using namespace std;

int kthsmallest(vector<int> &arr, int k){
    priority_queue<int> maxh;
    for(int i=0; i<arr.size(); i++){
        
        maxh.push(arr[i]);
        if(maxh.size()>k){
            maxh.pop();
        }
    }
    return maxh.top();
}

int main(){
vector<int> arr={7, 10, 4, 3, 20, 15};
cout<<kthsmallest(arr, 3)<<endl;


return 0;
}