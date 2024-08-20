
#include<iostream>
using namespace std;
void bubblesort(int a[],int n){
    int temp;
    for(int i=0 ; i<n; i++){
        for(int j=0 ; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
}
void inputarray(int a[], int n){
for(int i=0;i<n;i++){
    cin>>a[i];
}
}
void Outputarray(int a[],int n){
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
    cout<<endl;
}
}


 int main(){
 int a[1000], n;
cin>>n;
inputarray(a,n);
bubblesort(a,n);
Outputarray(a,n);
}


