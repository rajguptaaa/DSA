/*
Problem Description :
The function accepts two positive integers ‘r’ and ‘unit’ and a positive integer array ‘arr’ of size ‘n’ as its argument 
‘r’ represents the number of rats present in an area,
‘unit’ is the amount of food each rat consumes and each ith element of 
array ‘arr’ represents the amount of food present in ‘i+1’ house number, where 0 <= i

Note:
Return -1 if the array is null
Return 0 if the total amount of food from all houses is not sufficient for all the rats.
Computed values lie within the integer range.

Example:
Input:
r: 7
unit: 2
n: 8
arr: 2 8 3 5 7 4 1 2
Output:
4
Explanation:
Total amount of food required for all rats = r * unit
= 7 * 2 = 14.
The amount of food in 1st houses = 2+8+3+5 = 18. Since, amount of food in 1st 4 houses is sufficient for all the rats. Thus, output is 4.
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int ratFood(vector<int>& arr, int n, int r, int unit){
    if(arr.empty()) return -1;
    int sum = 0;
    int count = 0;
    int needed = r*unit;
    for(int i=0; i<n; i++){
        sum += arr[i];
        count++;
        if(sum >= needed){
            return count;
    }
    }
    return 0;
}

int main(){
    int n, r, unit;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>r;
    cin>>unit;

    cout<<ratFood(arr, n, r, unit);

    return 0;
}