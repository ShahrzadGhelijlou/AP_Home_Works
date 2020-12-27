#include <iostream>
#include <stdlib.h>
struct Node {
	int data;
	Node* next;
};

struct Node* NodeMaker(){
	
	struct Node* node = (struct Node*)malloc(sizeof(struct Node));
	
	node->data = 0;

	node->next = NULL;
	
	return node;
}

struct Node* ListMaker(int count) {
	
	if(count<1) {
		printf("Invalid value received");
		return NULL;
	}
    
	struct Node* head = NodeMaker();
    
	struct Node* prev = NULL;
    
	struct Node* temp = NULL;
   
    prev = head;
    
	for (int i = head->data + 1; i < count; i++)
    {
        struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = i;
        temp->next=NULL;
        prev->next = temp;
        prev = temp;
    }
    
	return head;

}
void Print(struct Node* head){
    
    if (head == NULL) printf("Can not find any value to print");
    
	struct Node* temp = head;
    
	int i = 0;
    
	do {
        printf(" number %d : %d", i, temp->data);
        printf("\n");
        temp = temp->next;
        i++;
        
    } while (temp!=NULL);

    printf("\n");
}

void DeleteNode( struct Node** headreference, int number) {
    
	if (*headreference == NULL) {
        printf("No value to delete"); 
        return;
    }
   
    struct Node* temp = *headreference;
   
   if (number == 0)
    {
        *headreference = temp->next;
        free(temp);
        return;
    }
    
	struct Node* prev;
   
    do
    { 
        prev = temp;
        temp=temp->next;
        number--;

    } while (number!=0 && temp!=NULL );
    
	if (temp == NULL)
    {
        printf("This element is not found\n");
        return;
    }
    
	prev->next = temp->next;
    
	free(temp);
   
    return;

}
void DeleteByValue(struct Node** headreference, int value) {
  
   struct Node* temp = *headreference;
   
    if(temp!=NULL && temp->data==value)
    {
    	*headreference=temp->next;
    	free(temp);
    	return;
	}

	struct Node* prev;

	while(temp!=NULL && temp->data!=value)
	{   
	    prev=temp;
		temp=temp->next;
	}
	
	if(temp==NULL)
	{
		printf("This value is not found\n");
		return;
	}
	
	else{
	
	prev->next=temp->next;
	free(temp);
	return;}
	
}
int Counter(struct Node** head){
	
	if(*head==NULL)
	 return 0;
	 
	 struct Node* temp=*head;
	
	 int i=0;

	while(temp!=NULL)
	{
		i++;
		temp=temp->next;
	}
	
	return i;
}
void Insert(struct Node** head,int number,int value){
    
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    
	newnode->data=value;
	
	if(*head==NULL)
	{   
	    newnode->next=NULL;
	   *head=newnode;
	   return;
	}
	
	if(number==0)
	{
	    newnode->next=*head;
		*head=newnode;
		return;
	}
	
	struct Node* temp=*head;
	
    int i=1;
	
	while(temp!=NULL && i!=number)
	{
		temp=temp->next;
		i++;
	}
	
	int count=Counter(head);
    
	if(temp==NULL && number==count)
   {
        newnode->next=NULL;
	    temp->next=newnode;
	    return;
   }
   
   else if(temp==NULL&& number!=count){
   	printf("Out of range\n\n");
   	return;
   }
  
   newnode->next=temp->next;
   
   temp->next=newnode;
  	   
   return;
  	
   
	
}
void GetNode(struct Node* head,int number){
	struct Node*temp=head;
	
	if(head==NULL) {
	Print(head);
	return;
    }
  
    int i=0;
    
	while(i!=number)
    {
    	temp=temp->next;
    	i++;
	}
    
	printf("The value of node number %d is %d",i,temp->data);
	
	return;

}
int main()
{    
    
    struct Node* list =ListMaker(10);
    Print(list);
    printf("---------------------");
    printf("\n\n");
    
	DeleteNode(&list,9);
    Print(list);
    printf("---------------------");
    printf("\n\n");
    
	DeleteByValue(&list,9);
    Print(list);
    printf("---------------------");
    printf("\n\n");
    
	Insert(&list,12,12);
    Print(list);
    printf("---------------------");
    printf("\n\n");
    
	GetNode(list,0);
   


    return 0;
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

