//Print all the increasing sequences 
//of length k from first n natural numbers.
#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> ans,int n,int k,int idx){
    if(idx==n){
        if(ans.size()==k){
            for(int i=0;i<k;i++){
                cout<<ans[i];
            }
            cout<<endl;
        }
        return;
    }
    print(ans,n,k,idx+1);
    ans.push_back(idx);
    print(ans,n,k,idx+1);
    
}
int main(){
    int k=3;
    int n=5;
    int idx;
    vector<int> ans;
    print(ans,n,k,1);

}