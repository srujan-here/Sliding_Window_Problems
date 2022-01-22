#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s;
    cin>>n>>s;
    int m[n];
    for(int i=0;i<n;i++){
        cin>>m[i];
    }
    int t1=0,t2=0;
    int sum=0,maxi=0;
    while(t2<n){
        sum=sum+m[t2];
        if((t2-t1+1)<s){
            t2++;
        }
        else if((t2-t1+1)==s){
            maxi=max(maxi,sum);
            sum=sum-m[t1];
            t1++;
            t2++;

        }


    }
    cout<<maxi<<endl;
}