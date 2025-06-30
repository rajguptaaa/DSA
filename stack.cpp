#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> revArr(vector<int>& arr){
    stack<int> st;

    for(int val : arr){
        st.push(val);
    }

    vector<int> nums;
    while (!st.empty()){
        nums.push_back(st.top());
        st.pop();
    }
    return nums;
}
int printArr(vector<int>& arr){
    for(int val : arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}

string revStr(string str){

    return 0;
}

vector<int> nextGreater(vector<int>& nums) {
    int n = nums.size();
    vector<int> res(n, -1);
    stack<int> st;
    for (int i = 0; i < n; i++) {
        while (!st.empty() && nums[i] > nums[st.top()]) {
            res[st.top()] = nums[i];
            st.pop();
        }
        st.push(i);
    }
    return res;
}


int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    vector<int> res = revArr(arr);
    printArr(res);
    vector<int> nge = nextGreater(arr);
    printArr(nge);
    return 0;
}