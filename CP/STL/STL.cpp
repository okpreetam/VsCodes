//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <climits>

using namespace std;

bool f(int x,int y){
    return x<y;
}

void vectorgod(){
//Vector

    vector<int> v1={16,8,16,89,165,49};
    cout<<v1[0]<<endl;
    sort(v1.begin(), v1.end());
    cout<<v1[0]<<endl;

    v1.push_back(100); 
    v1.push_back(56);
    v1.push_back(100);
    v1.push_back(100);
    v1.push_back(100);  

    // bool p1 = binary_search(v1.begin(),v1.end(),100);
    // cout<<"Binary Search: "<<p1<<endl;
    // NOT WORKED BCOZ BINARY SEARCH WORKS ONLY ON SORTED LIST

    sort(v1.begin(), v1.end(),f);  // f is comprator function also greater<int>()  

    bool p2 = binary_search(v1.begin(),v1.end(),100);
    cout<<"Binary Search: "<<p2<<endl;
    
    // Also without iterator
    // for(int x: v1)
    // {
    //     cout<<x<<" ";
    // }

    // Also want to change vale iterate by refrence

    for(int &x: v1){//refrence
          x++;
    }

    for(int x: v1){//refrence
          x++;
    }
    vector<int>::iterator it3;
    for(it3=v1.begin();it3!=v1.end();it3++)
    {
        cout<<*it3<<" ";
    }
    cout<<endl;
    
    //Lower Bound Upper Bound work on sorted list 
    //auto it=lower_bound(v1.begin(),v1.end(), 100);
    vector<int>::iterator it=lower_bound(v1.begin(),v1.end(), 100);
    vector<int>::iterator it2=upper_bound(v1.begin(),v1.end(), 100);

    cout<<*it<<" "<<*it2<<" ok"<<endl;
    //ITERATOR IN VECTORS ARE RANDOM,
    //WHICH MEANS WE CAN PERFORM ARITHMATIC OPERTATION ON ITERATTOR
 
    cout<<it2-it<<endl;
}

void setGod(){
        //Set GoD

    set<int> s;
    s.insert(56);
    s.insert(-15);
    s.insert(164);
    s.insert(49);
    s.insert(330);
    s.insert(-46);
     
     //Else: 
     set<int>::iterator it;
     for(it=s.begin();it!=s.end();it++) 
     cout<< *it <<" ";
     cout<<endl;

     for(int x: s) cout<<x<<" ";
     cout<<endl;

     set<int>::iterator loop=s.end();
     cout<<*loop<<endl;

     auto iter2=s.find(330);

     if(iter2==s.end()){
         cout<<"nope"<<endl;
     }
     else {
         cout<<"Present "<<*iter2<<endl;
     }
     
     // -46 -15 49 56 164 330

     auto itr2=s.upper_bound(49);
     auto itr3=s.upper_bound(52);

     cout<<*itr2<<" "<<*itr3<<endl;

     auto itr4=s.upper_bound(330); // it returns itr4 to s.end
     if(itr4==s.end()) cout<<"not possible"<<endl;

     // s.erase() to delete an element
}


void maplol(){
        // Map Gold
    map<int,int> a;
    a[1]=100;
    a[3]=450;
    a[8]=152;
    a[5]=26; // Not possible a[5]=215;


    map<char,int> cti;
    string x="lolmate";

    for(char z:x){
        cti[z]++;
    }

    cout<< cti['m'] <<" "<< cti['l'] <<endl; // ok char ' '
}

int main(){
    
    //Power of STL
    // add[2,3]
    // add[5,20]
    // add[50,80]


     set< pair<int,int> > s;

     s.insert({10,89});  // pair of int,char {78,'&'}
     s.insert({113,212});
     s.insert({300,400}); 

    int point =120;

    auto it=s.upper_bound({point, INT_MAX });
    if(it==s.begin())
    {
        cout<< "nope" << endl;
        return 0;
    }

    it--;
    pair<int,int> current=*it;

    if(current.first<= point && current.second>=point){
        cout<<"yes "<< current.first <<" "<< current.second << endl;
    }



    }
