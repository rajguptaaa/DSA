#include<iostream>
#include<vector>
using namespace std;

int main(){

    int rows, cols;
    cin>>rows;
    cin>>cols;

    vector<vector<int>> arr(rows, vector<int>(cols));

    //input
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>arr[i][j];
        }
    }

    //optput
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //static way
    vector<vector<int>> arr2 = {
        {1,2,3,4},
        {5,6,7,8},
        {1,2,3,4}
    };

    for(int i=0; i<arr2.size(); i++){
        for(int j=0; j<arr2[i].size(); j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

//pending