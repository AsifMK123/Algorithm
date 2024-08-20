#include<iostream>
using namespace std;
void selection_sort(int a[],int n){
int temp,mini;
for(int i=0;i<n-1;i++){
    mini=i;
    for(int j=i+1;j<n;j++){
        if(a[j]< a[mini]){
            mini=j;
        }
        if(mini != i){
            temp=a[i];
            a[i]=a[mini];
            a[mini]=temp;
        }
    }
}

}
void input_Array(int a[],int n){
for(int i=0;i<n;i++){
    cin>>a[i];
}

}
void output_Array(int a[],int n){
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
    cout<<endl;
}

}
int main(){
int a[1000],n;
cin>>n;
input_Array(a,n);
selection_sort(a,n);
output_Array(a,n);

}
