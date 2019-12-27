#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin>>test;
    while(test--){
        int n,max,maxl=0; string s;
        cin>>n>>s;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(s[i]==s[j]){
                    max=n-j;
                    if(max>maxl) maxl=max;
                }
            }
        }

        cout<<maxl<<endl;
    }
}