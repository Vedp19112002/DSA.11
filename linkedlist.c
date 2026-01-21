#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
} *head=NULL;
struct node *temp;
int count=0;
void create_node(int x){
    struct node *newnode;
    newnode= (struct node*) malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
        temp=head;
    }
    else {
        temp->next=newnode;
        temp=temp->next;
    }
    count++;
    printf("Node created \n");
}

int main(){
    int choice=1,x;
   while(choice==1){
    printf("Enter Node Data: ");
    scanf("%d",&x);
    create_node(x);

printf("Enter 1 to create a node, 0 to exit: ");
scanf("%d",&choice);
}
printf("%d",count);
return 0;
}