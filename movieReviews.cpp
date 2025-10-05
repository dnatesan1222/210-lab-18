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
    n->rating = r;
    n->comment = c;

    if (!head){
        n->next = nullptr;
        head = n;
        return;
    }else
        n->next = head;


}


