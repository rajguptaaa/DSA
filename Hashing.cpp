#include<iostream>
#include<hashtable.h>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<int, int> m;
    m.insert({1, 10});
    m[2]=20;
    for(auto x : m){
        cout<<x.first<<" "<<x.second<<endl;
    }
}


// #include<unordered_set>
// using namespace std;
// int main(){
//     int arr[]={1,2,2,3,4,5,6,1,3,4,5,6};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     unordered_set<int> s(arr, arr+n);
//     for(auto x : s){
//         cout<<x<<endl;
//     }
// }




