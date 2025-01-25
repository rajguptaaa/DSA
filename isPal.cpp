#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool isPal(string str){
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    int s=0;
    int e=str.length()-1;
    while(s<e){
        if(str[s] !=str[e]){
            return false;
        }
        s++;
        e--;
    }
    return true;
}
int main(){
    string str;
    getline(cin, str);
    if(isPal(str)){
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}