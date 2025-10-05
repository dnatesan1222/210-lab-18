// COMSC-210 | Lab 18 | Diksha Tara Natesan
// IDE used: Vim/Terminal

#include <iostream>
#include <string>
using namespace std;

struct Node {
    double rating;
    string comment;
    Node* next;
};

//function prototypes
void head(Node *&head, double r, string c);
void tail(Node *&head, double r, string c);
void display(Node *);


int main(){
    //ask user whether they want new nodes to be added at head or tail
    cout << "Which linked list method should we use?" << endl;
    cout << "\t[1] New nodes are added at the head of the linked list" << endl;
    cout << "\t[2] New nodes are added at the tail of the linked list" << endl;
    cout << "\tChoice: ";
    int method;
    cin >> method;

    while (method != 1 && method != 2){
        cout << "Error. Please input 1 or 2 to select an option." << endl;
        cout << "\tChoice: ";
        cin >> method;
    }
    
    Node *head = nullptr;
    int r;
    string c;
    char choice;

    do{
        cout << "Enter review rating 0-5: ";
        cin >> r;
        cout << "Enter review comments: ";
        cin >> c;
        if (method == 1)
            head(head, r, c);
        if (method == 2)
            tail(head, r, c);
        cout << " Enter another review? Y/N: ";
        cin >> choice;
    }while (choice == 'y' || choice == 'Y');

    cout >> "Outputting all reviews:" << endl;
    display(head);


    /*//basic testing of display() & head() & tail()
    Node *test = nullptr;
    head(test, 4.3, "oscar");
    tail(test, 2.5, "no nominations");
    head(test, 3.9, "lead actor phenomenal");
    tail(test, 4.8, "oscar winner");
    display(test); */


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
        while (temp->next)
            temp = temp->next;
	temp->next = tail;
    }
}

void display(Node *head){
    if (!head)
        cout << "Empty list.\n" << endl;
    else{
        int count = 1;
        Node *temp = head;
        while (temp){
            cout << "\t> Review #" << count++ << ": " << temp->rating << ": " << temp->comment << endl;
            temp = temp->next;
        }
    cout << endl;
    }

}
