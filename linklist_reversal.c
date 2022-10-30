#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

void main(){
    
    int n,i;
    node *A,*B,*C,*HEAD=NULL;
    printf("enter the no. of nodes ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        if(HEAD==NULL)
        {
            A=(node*)malloc(sizeof(node));
            HEAD=A;
            printf("\nenter element of node ");
            scanf("%d",&HEAD->data);
            A->next=NULL;
        }
        
        else
        {
            A->next=(node*)malloc(sizeof(node));
            A=A->next;
            printf("enter element of node ");
            scanf("%d",&A->data);
            A->next=NULL;
        }
        
    }
    
    A=HEAD;
    printf("\nyour linked list\n");
    while( A!=NULL ){
        printf("%d\t",A->data);
        A=A->next;
    }
    
    
    A=NULL;
    B=HEAD;
    C=B->next;
    while(B!=NULL){
        B->next=A;
        A=B;
        B=C;
        if(C!=NULL){
            C=C->next;
        }
    }
    
    HEAD=A;
    printf("\nyour linked list\n");
    while( A!=NULL ){
        printf("%d\t",A->data);
        A=A->next;
    }
    
}
