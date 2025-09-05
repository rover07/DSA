#include <iostream>

using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node(int val)
  {
    data = val;
    next = NULL;
  }
};

class CircularList
{

  Node *head;
  Node *tail;

public:
  CircularList()
  {
    head = tail = NULL;
  }

  void insertAtHead(int val)
  {
    Node *newNode = new Node(val);
    // case 1: when ll is empty
    if (tail == NULL)
    {
      head = tail = newNode;
      tail->next = head;
    }
    // case 2: using head node
    else
    {
      newNode->next = head;
      head = newNode;
      tail->next = head;
    }
    // case 3 when value of head is missing, we use tail
  }

  void insertAtTail(int val)
  {
    Node *newNode = new Node(val);
    if (head == NULL)
    {
      head = tail = newNode;
      tail->next = head;
    }
    else
    {
      // newNode->next = head;
      // tail->next = newNode;
      // tail = tail->next;

      tail->next = newNode;
      tail = tail->next;
      tail->next = head;
    }
  }

  void deleteAtHead()
  {
    
  }

  void print()
  {
    if (head == NULL)
      return;
    cout << head->data << endl;
    Node *temp = head->next;

    while (temp != head)
    {
      cout << temp->data << endl;
      temp = temp->next;
    }
  }
};

int main()
{
  CircularList cll;
  cll.insertAtHead(1);
  cll.insertAtHead(2);
  cll.insertAtHead(3);
  cll.print();
  cout << "Inserted at head!" << endl;
  cll.insertAtTail(4);
  cll.insertAtTail(5);
  cll.insertAtTail(6);
  cll.print();
  cout << "Inserted at tail!" << endl;
  cll.deleteAtHead();
  cll.print();
  cout << "Deleted at head!" << endl;

  return 0;
}
