//#include <bits/stdc++.h>
#include <iostream>
typedef int ull;

using namespace std;

ull add(ull a,ull b){
    ull count=0;
    while(b>0){
        ull u=a^b;
        ull v=a&b;
        a=u;b=v*2;
        count++;
    }
    return count;
}

ull binaryToDecimal(string n) 
{ 
    string num = n; 
    ull dec_value = 0; 
  
    // Initializing base value to 1, i.e 2^0 
    ull base = 1; 
  
    ull len = num.length(); 
    for (ull i = len - 1; i >= 0; i--) { 
        if (num[i] == '1') 
            dec_value += base; 
        base = base * 2; 
    } 
  
    return dec_value; 
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin>>test;
    while(test--){
        string a,b; cin>>a>>b;
        ull c = binaryToDecimal(a);
        ull d = binaryToDecimal(b);
        cout<<add(c,d)<<endl;
    }
}