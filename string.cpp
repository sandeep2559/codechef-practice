#include<iostream>
#include<string>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        string S;
        cin>>S;
        int i=0,low=1,mid,high=16;
        for(i=0;i<n;i++){
            mid=(low+high)/2;
            if(S[i]=='0'){
                high=mid;
            }
            if(S[i]=='1'){
                low=mid+1;
            }
            if(low==high){
                cout<<char(96+low);
                low=1;
                high=16;
            }
        }
        cout<<endl;
    }
        
    return 0;
}