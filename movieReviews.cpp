// COMSC-210 | Lab 18 | Diksha Tara Natesan
// IDE used: Vim/Terminal


#include <iostream>
#include <string>
using namespace std;

struct Node {
    double rating;
    string comment;
    Node* next;
}

//function prototypes
void head(Node *&head, double r, string c);
void tail(Node *&head, double r, string c);
void display(Node *)


int main(){
    //ask user whether they want new nodes to be added at head or tail

}

void head(Node *&head, double r, string c){
    Node *n = new Node;
    n->rating = r;		//save the values in a new node
    n->comment = c;

    if (!head)			//checks if tthe orig LL has nodes yet
        n->next = nullptr;	//if not, the new node is the first node of the LL
    else
        n->next = head;		//if so, new node becomes the head and points to LL
    head = n;			//save the new head to the original address 

}

void tail(Node *&head, double r, string c){
    Node *tail = new Node;
    tail->rating = r;
    tail->comment = c;
    tail->next = nullptr;

    if(!head)
        head = tail;
    else{
        Node *temp = head;
        while (temp)
            temp = temp->next;
        
    }

}


