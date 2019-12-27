#include <stdio.h>
#include <stdlib.h>

struct node{
  int data;
  struct node* link;
}*head=NULL;

void insertatbig(int x) {
   struct node* temp=(struct node*)malloc(sizeof(struct node));
   temp->data = x;
   temp->link = head;
   head = temp;
}

void insertatnpos(int x, int pos){
  struct node* temp=(struct node*)malloc(sizeof(struct node));

  if(pos==1){
  temp->data = x;
  temp->link = head;
  head = temp;
  }
  else{
    struct node* traversing=head;
    for(int i=0;i<pos-2;i++){
      traversing = traversing->link;
    }
    temp->data = x;
    temp->link = traversing->link;
    traversing->link=temp;
  }
}

void deleteatnpos(int pos){
  struct node* traversing=head;
  struct node* temp=head;
  if(pos==1){
    head=temp->link;
    free(temp);
    return;
  }

  for(int i=0;i<pos-1;i++){
    traversing = traversing->link;
  }

  for(int i=0;i<pos-2;i++){
    temp = temp->link;
  }

  temp->link = traversing->link;
  free(traversing);
}

void print(){
struct node* temp=head;

  while(temp != NULL){
    printf("%d ",temp->data);
    temp=temp->link;
  }
}

int main(){
  int n,x,pos;
  printf("How many no. ?\n");
  scanf("%d",&n);
  printf("Enter All No: ");
  for(int i=0;i<n;i++){
    scanf("%d %d",&x,&pos);
    insertatnpos(x,pos);
    printf("\nLinked List Elements are: ");
    print();
  }

  deleteatnpos(3);
  printf("\nLinked List Elements are: ");
  print();

}
