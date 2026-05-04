void insertBeg(struct node **head,int x){
    struct node *new=malloc(sizeof(struct node));
    new->data=x;
    new->next=*head;
    *head=new;
}