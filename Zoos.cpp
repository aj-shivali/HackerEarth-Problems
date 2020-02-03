#include<iostream>
#include<cstring>
using namespace std;
int main(){
string zoo;
cin>>zoo;
int x=0,y=0;
for(int i=0;i<=zoo.size();i++){
    if(zoo[i]=='z'){
        x++;
    }
    else if(zoo[i]=='o'){
        y++;
    }
}
x=2*x;
if(x==y){
    cout<<"Yes";
}
else{
    cout<<"No";
}

}
