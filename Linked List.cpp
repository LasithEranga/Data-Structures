#include <iostream>

using namespace std;

//creating a structure for linked list with one int data cabinet


struct node{
	int data; //data 
	node *next; //struct 
};

void Add(node *&head, node *&last, int data);

int main(){
	node *head;
	node *last;
	Add(head,last,10);
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

























