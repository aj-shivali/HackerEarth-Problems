#include<iostream> 
using namespace std;
int main(){
long long int arr[1000];
int n,product=1,M=1000000007; 
cin>>n;
cout<<endl;
for(int i=1;i<=n;i++){
    cin>>arr[i];
}
for(int i=1;i<=n;i++){
    product=(product*arr[i])%M;
}
cout<<product;
}
