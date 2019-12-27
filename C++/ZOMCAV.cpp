#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
    unsigned int n,i,j,rads=0,zomhs=0,zomm=0,radm=0;
    cin>>n;
    unsigned int cave[n];
    for(i=0;i<n;scanf("%d",&cave[i]),i++);
    unsigned int radiation[n];
    for(i=0;i<n;radiation[i]=0,i++);

    for(i=0;i<n;i++)
    for(j=0;j<(2*cave[i]) && j<n;radiation[j]+=1,j++);

    unsigned int zom[n];

    for(i=0;i<n;i++){
      scanf("%d",&zom[i]);
      zomhs+=zom[i];
      if(zom[i]>=zomm)
      zomm=zom[i];
    }

    for(i=0;i<n;i++){
      rads+=radiation[i];
      if(radiation[i]>=radm)
      radm=radiation[i];
    }

    if(zomhs==rads && radm>=zomm)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
 }
}
