#include <iostream>

using namespace std;

//creating a structure for linked list with one int data cabinet


struct node{
	int data; //data 
	node *next; //struct 
};

void Add(int *head, int data);

int main(){
	int *head;
	int id =10;
	head = &id;
	/*head = Add(head,10);
	cout << "head data = "<< head->data <<endl;/*"\n"<<
			"head is pointing at :"<<head->next->data;*/
	cout <<"head's Address: at main: "<<&head;
	Add(head,20);
	cout <<"head's Address: at main: "<<*head;
}

//creating functions for linked lists
void Add(int *head, int data){ //getting the address of the head node.... so that I can change the address it's pointing
	//if it just get the pointing address of the head, i won't be able to change the pointing address
	cout <<"\nhead's Address: at function: "<<head;
	int ifg = 203;
	head = &ifg;
	
	/*if head is null, it means there are no data 
	if (head == NULL){
		node *current = new node;
		current->data = data;
		current->next = NULL;
		
	}*/
}

























