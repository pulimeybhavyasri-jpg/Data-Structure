void display(struct node *head){
    while(head){
        printf("%d ",head->data);
        head=head->next;
    }
}