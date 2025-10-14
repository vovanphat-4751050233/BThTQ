#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int n;
    printf("nhap n :\n");
    scanf("%d",&n);  
      for(int i=1;i<=n;i++){
        if(n%i==0) cout<<n<<"chia het "<<i<<endl;
        else cout<<n<<"khong chia het"<<i<<endl;
    }
    return 0;
}