struct node{
    int data;
    struct node *prev,*next;
};

void createCDLL(){
    struct node *head=malloc(sizeof(struct node));
    head->data=10;
    head->next=head;
    head->prev=head;
}