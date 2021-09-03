  int static x=0;
if (head->data==i){
    return x;
}
x++;
if(head->next==NULL){
    return -1;
}
return swap(head->next,i);