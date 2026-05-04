struct node{
    int data;
    struct node *next;
};

void createCSLL(){
    struct node *head=malloc(sizeof(struct node));
    head->data=10;
    head->next=head;
}