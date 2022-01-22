#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s;
    list<int> l1;
    cin>>n>>s;
    int m[n];
    for(int i=0;i<n;i++){
        cin>>m[i];
    }
    int t1=0,t2=0;
    int temp=0;
    int ans=0;
    vector<int> T;
    while(t2<n){
        if(m[t2]<0)
        l1.push_back(m[t2]);

        if((t2-t1+1)<s){
            t2++;
        }
        else if((t2-t1+1)==s){
            if(l1.empty()){
                T.push_back(0);
            }
            else{
                T.push_back(l1.front());
                if(m[t1]==l1.front()){
                    l1.pop_front();
                }
                t1++;
                t2++;
            }

        }
    }
    for(int y:T){
        cout<<y<<" ";
    }cout<<endl;
}