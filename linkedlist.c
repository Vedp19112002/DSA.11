#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
} *head=NULL;
struct node *temp=NULL;
int count=0;
//::NODE CREATION::
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

//::NODE DATA DISPLAY::
void display(){
    temp=head;
    if(head==NULL){
        printf("Empty LL\n");
    }
    else{
        while(temp!=NULL){
            printf("%d\t",temp->data);
            temp=temp->next;
        }
    }
    printf("\n");
}

int main(){
    int choice,x;
    printf("Enter 1 for Node creation  \nEnter 0 for data display ");
    scanf("%d",&choice);
     while(choice==1){
    printf("Enter Node Data: ");
    scanf("%d",&x);
    create_node(x);
    printf("Enter 1 for Node creation  \nEnter 0 for data display ");
    scanf("%d",&choice);
    
}

	display();

printf("Total Nodes Created = %d",count);
return 0;
}