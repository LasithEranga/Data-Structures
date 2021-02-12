#include <iostream>

using namespace std;

//creating a structure for linked list with one int data cabinet


struct node{
	int data; //data 
	node *next; //struct 
};

void Add(node *&head, node *&last, int data);
void PrintList(node *head);

int main(){
	node *head=NULL;
	node *last;
	int input;
	for (int i=0; i<3; i++){
		cin>>input;
		Add(head,last,input);
	}
	PrintList(head);

}

//creating functions for linked lists
void Add(node *&head, node *&last,int data){ //getting the address of the head node.... so that I can change the address it's pointing
	//if it just get the pointing address of the head, i won't be able to change the pointing address
	
	//if head is null, it means there are no data 
	if (head == NULL){
		node *temp = new node; //create a new node and assign it to the head node. 
		temp->data = data;
		temp->next = NULL;
		head = last = temp;
	}
	else { //head is pointing at some data 
	//by using last, we can track the last element then add newly added data element to that element.
	//we can travel until last element from the head, but that loop will take n time to find last element when n elements are available
	node *temp = new node;
	temp->data = data;
	temp->next = NULL;
	last->next = temp;
	last = temp;
	}
}


void PrintList(node *head){
	//takes the head and print elements until last node is found
	node *current = head;
	if (current!=NULL){
		while (current!=NULL){
		cout << current->data <<",";
		current=current->next;//set current to next element;
		}
		cout <<endl;
	}
	else {
		//the list is empty 
		//head is pointing at nowhere
		cout <<"List is empty"<<endl;
	}
	
}
























