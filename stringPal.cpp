#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
bool isPal(string str){
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    int s = 0;
    int e = str.length()-1;
    while (s<e)
    {
        if(str[s]!=str[e]){
            return false;
        }
        s++;
        e--;
    }
    return true;
}

int main(){

    string str1;
    cout<<"Enter a word or sentence: "<<endl;
    getline(cin, str1);
    if(isPal(str1)){
        cout<<str1<<" is a palindrome."<<endl;
    } else{
        cout<<str1<<" is not a palindrome."<<endl;
    }
    return 0;
}