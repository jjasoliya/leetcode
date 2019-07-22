#include <iostream>
using namespace std;


// class node definition
class node {
    public:
    int data;
    node * p;
};

class SLL {
    node * head;

    public:
    SLL();
    ~SLL();
    void pushfront(int data);
    void pop();

};

// constructor
SLL::SLL()
{
    head = NULL;
}

SLL::~SLL()
{
    while(head !=  NULL)
    {
        node * temp;
        temp = head;
        head = temp->p;
        delete temp;
    }
}

void SLL::pushfront(int data)
{
    node * temp_node;
    temp_node = new node;

    temp_node->data = data;
    temp_node->p = head;
    head = temp_node;
}


int main()
{

 SLL sll;
 sll.pushfront(5);

return 0;
}