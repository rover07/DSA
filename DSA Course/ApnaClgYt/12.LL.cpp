#include <iostream>

using namespace std;

// creating individual nodes
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

// combining all the nodes using the below class
class List
{
  Node *head;
  Node *tail;

public:
  List()
  {
    head = tail = NULL;
  }

  // // Creating new node
  void push_front(int val)
  {
    // 1st way of creating new node
    Node *newNode = new Node(val); // dynamic
    // 2nd way of creating new node (Dont use this)
    // Node *newNode(val); // this is static allocation and will be deleted once this control is out of this scope
    if (head == NULL)
    // case 1: list is empty
    {
      head = tail = newNode;
      return;
    }
    else // case 2: list already has nodes
    {
      newNode->next = head; // link newNode to old head
      head = newNode;       // newNode becomes the new head'
      // // Therefore we first linked the nodes using the head pointer, then shifted the head pointer to newNode
    }
  }
  void push_back(int val)
  {
    Node *newNode = new Node(val);
    if (head == NULL)
    {
      head = tail = newNode;
    }
    else
    {
      tail->next = newNode;
      tail = newNode;
    }
  }

  void pop_front()
  {
    if (head == NULL)
    {
      cout << "LL is empty";
      return;
    }
    Node *temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
  }

  void pop_back()
  {
    if (head == NULL)
    {

      return;
    }
    else
    {

      Node *temp = head;
      while (temp->next != tail)
      {
        temp = temp->next; // moves until previous node is found
      }
      temp->next = NULL;
      delete tail;
      tail = temp;
      //
    }
  }
  void insert(int val, int pos)
  {
    if (pos < 0)
    {
      cout << "Invalid!!!";
      return;
    }
    if (pos == 0)
    {
      push_front(val);
      return;
    }

    Node *temp = head;
    for (int i = 0; i < (pos - 1); i++)
    {
      if (temp == NULL) // If the position we passed exceeds the size of LL
      {
        cout << "Invalid position";
        return;
      }
      temp = temp->next;
    }

    Node *newNode = new Node(val);

    newNode->next = temp->next;
    temp->next = newNode;
  }

  int search(int key)
  {
    int idx = 0;
    Node *temp = head;
    while (temp != NULL)
    {
      if (temp->data == key)
      {
        return idx;
      }
      else
      {
        temp = temp->next;
        idx++;
      }
    }
    return -1;
  }
  void print()
  {
    Node *temp = head;
    while (temp != NULL)
    {
      cout << temp->data << "-> ";
      temp = temp->next;
    }
    cout << "NULL" << endl;
  }
};

int main()
{
  List ll;
  ll.push_front(1);
  ll.push_front(2);
  ll.push_front(3);
  ll.push_back(4);
  ll.print();
  cout << "After pop front: ";
  ll.pop_front();
  ll.print();
  cout << "After pop back: ";
  ll.pop_back();
  ll.print();
  cout << "After inserting in middle: ";
  ll.insert(99, 1);
  ll.print();
  cout << "Position of search value is at:" << ll.search(1);

  return 0;
}
