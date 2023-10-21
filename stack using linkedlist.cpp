#include <iostream>
using namespace std;
class node{
	public:
	int data;
	node* next;
	
	node(int val){
		data = val;
		next = NULL;
	}
};

class stack{
	node *top;
	
	public:
		stack(){
		top=NULL;
	}
	
	void push(int item){
		node* newnode = new node(item);
		newnode -> next = top;
		top = newnode;
		cout<<"Pushed item is: "<<item<<endl;
	}
	
	void pop(){
		if (top == NULL){
			cout<<"Stack is empty"<<endl;
			return;
		}
		node* temp = top;
		int poppeditem = temp->data;
		top = top->next;
		delete temp;
	cout<<"popped item is: "<<poppeditem<<endl;;
	}
	
	void peek(){
		cout<<"Top value is: "<<top->data<<endl;
	}
};

int main(){
	stack mystack;
	mystack.push(20);
	mystack.push(30);
	mystack.peek();
	mystack.pop();
	mystack.peek();
	return 0;
}

