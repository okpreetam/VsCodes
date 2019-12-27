#include<iostream>
typedef long long int ll;

using namespace std;

ll binaryToDecimal(ll n){ 
    ll num = n; 
    ll dec_value = 0; 
     
    ll base = 1; 
  
    ll temp = num; 
    while (temp) { 
        ll last_digit = temp % 10; 
        temp = temp / 10; 
  
        dec_value += last_digit * base; 
  
        base = base * 2; 
    } 
  
    return dec_value; 
} 

int main(){
ll t; cin>>t;
while (t--){
  ll nop,count=0; cin>>nop;
  ll plyr,rslt=0;
  
  for(ll i=0;i<nop;i++){
  cin>>plyr;
  plyr=binaryToDecimal(plyr);
  rslt^=plyr;
  }
  cout << __builtin_popcount(rslt) << endl;
  }
return 0;
}