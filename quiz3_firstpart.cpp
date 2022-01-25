bool search(double key){

Node *temp = front;

while(temp!=NULL)

{
if(temp->value == key)

return true;

temp=temp->next;

}

return false;

}


