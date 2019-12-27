#include<stdio.h>
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    int b,p,f,h,c,btemp,bcount=0,hb=0,cb=0,lol,hbpro,cbpro,cbx,cx=0,hx=0,hbx;
    scanf("%d%d%d",&b,&p,&f);
    scanf("%d%d",&h,&c);
    bcount=b/2;lol=bcount;

if(h>=c){
  while(bcount&&p){
    hb++;bcount--;p--;
  }
  while(lol&&f){
    cb++;lol--;f--;
  }

  if(bcount>0)
    if(cb>0){
      cb--;
      cx++;
    }
    cbx=c*cx;
  }
  else{
    while(lol&&f){
      cb++;lol--;f--;
    }
    while(bcount&&p){
      hb++;bcount--;p--;
    }

    if(lol>0)
      if(hb>0){
        hb--;
        hx++;
      }
      hbx=h*hx;
    }


    hbpro=h*(hb+1)+hbx;
    cbpro=c*(cb+1)+cbx;

    if(cbpro>=hbpro)
    printf("%d\n",cbpro);
    else
    printf("%d\n",hbpro);


}

}
