#include<iostream>
using namespace std;
void insertion_sort(int a[],int n){
    int temp;

for(int i=1;i<n;i++){
    temp=a[i];
    int j=i-1;

while(  j>=0 && a[j]>temp){
    a[j+1]=a[j];
    j--;
}
a[j+1]=temp;
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
int a[1000], n;
cin>>n;
input_Array(a,n);
insertion_sort(a,n);
output_Array(a,n);

}
