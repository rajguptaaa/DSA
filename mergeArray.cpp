#include<iostream>
#include<algorithm>
using namespace std;
void mergeArray(int a[], int b[], int c[], int n, int m){
    int i=0,j=0,k=0;
    while(i < n && j < m){
        if(a[i] < b[j]){
            c[k++]=a[i++];
        }
        else if(a[i]>b[j]){
            c[k++]=b[j++];
        }
        else{
            c[k++]=b[j++];
            i++;
        }
    }
    while(i<n){
        c[k++]=a[i++];
    }
    while(j<m){
        c[k++]=b[j++];
    }
    
}
int main(){
        int a[5]={23,1,4,45,6};
        int b[4]={1,23,45,67};

        int n = sizeof(a) / sizeof(a[0]);
        int m = sizeof(b) / sizeof(b[0]);
        int c[n+m];

        sort(a, a + n);
        sort(b, b + m);

        mergeArray(a,b,c,n,m);
        
        for(int i=0; i<(n+m); i++){
            cout<<c[i]<<" ";
        }
}

