#include<iostream>
#include<vector>
using namespace std;
int solution(int a){
    int product=1;
    while(a!=0){
        product*=a%10;
        a/=10;
        
    }
    return product;
}

int main(){
    vector<int>v;
    int a;
    int size=0;
    while(cin>>a) {
        v.push_back(a);
        size++;
    }
    vector<int>res(size,0);
    for(int i=0;i<size;i++){
        long long product=solution(v[i]);
        res[i]=product;
    }
    for(int i=0;i<size;i++){
        cout<<res[i]<<" ";
    }
    return 0;
}