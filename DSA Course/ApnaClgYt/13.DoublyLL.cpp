#include <iostream>
using namespace std;

// Node of Doubly Linked List
class Node
{
public:
  int data;
  Node *next;
  Node *prev;

  Node(int val)
  {
    data = val;
    next = prev = NULL;
  }
};

// Doubly Linked List Class
class DoublyList
{
  Node *head;
  Node *tail;

public:
  DoublyList()
  {
    head = tail = NULL;
  }

  // Insert at front
  void push_front(int val)
  {
    Node *newNode = new Node(val);
    if (head == NULL)
    {
      head = tail = newNode;
    }
    else
    {
      newNode->next = head;
      head->prev = newNode;
      head = newNode;
    }
  }

  // Insert at back
  void push_back(int val)
  {
    Node *newNode = new Node(val);
    if (head == NULL)
    {
      head = tail = newNode;
    }
    else
    {
      newNode->prev = tail;
      tail->next = newNode;
      tail = newNode;
    }
  }

  // Delete from front
  void pop_front()
  {
    // We save the node in 'temp' first, because after moving head/tail
    // we still need a reference to delete the old node and free memory

    if (head == NULL)
    {
      cout << "DLL is empty" << endl;
      return;
    }
    if (head == tail)
    { // Single node case
      delete head;
      head = tail = NULL;
      return;
    }
    Node *temp = head;
    head = head->next;
    head->prev = NULL;
    temp->next = NULL;
    delete temp;
  }

  // Delete from back
  void pop_back()
  {
    if (head == NULL)
    {
      cout << "DLL is empty" << endl;
      return;
    }
    if (head == tail)
    { // Single node case
      delete head;
      head = tail = NULL;
      return;
    }
    Node *temp = tail;
    tail = tail->prev;
    tail->next = NULL;
    temp->prev = NULL;
    delete temp;
  }

  // Print DLL
  void print()
  {
    Node *temp = head;
    while (temp != NULL)
    {
      cout << temp->data << " <=> ";
      temp = temp->next;
    }
    cout << "NULL" << endl;
  }
};

int main()
{
  DoublyList dll;

  cout << "After Push front: " << endl;
  dll.push_front(1);
  dll.push_front(2);
  dll.push_front(3);
  dll.print();

  cout << "After Push back: " << endl;
  dll.push_back(4);
  dll.push_back(5);
  dll.push_back(6);
  dll.print();

  cout << "After Pop front: " << endl;
  dll.pop_front();
  dll.pop_front();
  dll.print();

  cout << "After Pop back: " << endl;
  dll.pop_back();
  dll.pop_back();
  dll.print();

  return 0;
}
