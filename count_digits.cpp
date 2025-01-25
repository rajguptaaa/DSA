#include<iostream>
using namespace std;
int count(int x){
    int res=0;
    while(x>0){
        x=x/10;
        res++;
    }
    return res;
}
int main(){
    int x=1001;
    cout<<count(x)<<endl;
}


                                                      //factorial
// int fact(int n){
//     if(n==0){
//         return 1;
//     }
//     return n*fact(n-1);
// }
// int main(){
//     int x=30;
//     cout<<fact(x);
// }



                                                    //gcd 3.0
// int gcd(int a, int b){
//     if(b==0){return a;}
//     else{
//         return gcd(b, a%b);
//     }
// }
// int main(){
//     cout<<gcd(4,6)<<endl;
//     cout<<gcd(7,13)<<endl;
//     cout<<gcd(5,5);
// }
                                                    //LCM

// int gcd(int a, int b){
//     if(b==0){return a;}
//     else{
//         return gcd(b, a%b);
//     }
// }   
// int lcm(int a, int b){
//     return (a*b)/gcd(a,b);
// }                       
// int main(){
//     cout<<lcm(4,6)<<endl;
//     cout<<lcm(5,5)<<endl;
// }                    

