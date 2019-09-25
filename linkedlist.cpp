//============================================================================
// Name        : linkedlist.cpp
// Author      : list
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


struct Node {
	int data;
	struct Node* next; //next is a pointer
};
//  function to create a new node
Node* newNode(int val)
{
	struct Node* temp = new Node;
	temp->data = val; //assining value to the tmp
	temp->next = NULL;
	return temp;
}

// function to print the list
void printList(Node* node)
{
	while (node != NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
}

// to merge the list
Node* merge(Node* h1, Node* h2)
{
	if (!h1) //if head1 is not equal return h2
		return h2;
	if (!h2)
		return h1;

		h1->next = merge(h1->next, h2);
		return h1;


}

int main()
{

	//values are passed to the 1st list
	Node* head1 = newNode(1);
	head1->next = newNode(3);
	head1->next->next = newNode(5);


	//values are passed to the 2nd list
	Node* head2 = newNode(0);
	head2->next = newNode(2);
	head2->next->next = newNode(4);


	Node* mergedhead = merge(head1, head2); //pass the head1 and head2 to merge fucnction to merge the list

	printList(mergedhead); //printing the merged list
	return 0;
}


