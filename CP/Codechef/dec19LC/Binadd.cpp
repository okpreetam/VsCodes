#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int add(string a,string b){
    int count=0;
    while(b>0){
        string u=a^b;
        string v=a&b;
        a=u;b=v*2;
        count++;
    }
    return count;
}

int binaryToDecimal(string n) 
{ 
    string num = n; 
    int dec_value = 0; 
  
    // Initializing base value to 1, i.e 2^0 
    int base = 1; 
  
    int len = num.length(); 
    for (int i = len - 1; i >= 0; i--) { 
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
        string a,b; 
        getline(cin, a);
        getline(cin, b);
        // int c = binaryToDecimal(a);
        // int d = binaryToDecimal(b);
        cout<<add(a,b)<<endl;
        // cout<<d<<endl;
    }
}