int findMergePoint(struct node *h1, struct node *h2)
{
    int len1 = 0, len2 = 0;
    struct node *temp;
    for(temp=h1;temp!=NULL;temp=temp->next)     len1++;
    for(temp=h2;temp!=NULL;temp=temp->next)     len2++;

    while(len1 > len2)
    {
        h1 = h1->next;
        len1--;
    }

    while(len2 > len1)
    {
        h2 = h2->next;
        len2--;
    }

    while(h1->data != h2->data)
    {
        h1 = h1->next;
        h2 = h2->next;
    }
    return h1->data;
}
