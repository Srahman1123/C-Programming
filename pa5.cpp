//Shamsur Rahman


#include <iostream>

using namespace std;

struct ListNode {
  int value;
  int index;
  ListNode * next;
};

class linked_list {
  public:
    ListNode * head;

  linked_list() {
      head = NULL;
    }

    ~linked_list() {}

  void append(int data) {

    ListNode ** point_to_head = & head;
    ListNode * required_node = new ListNode();

    ListNode * temp = * point_to_head;

    required_node -> value = data;

    required_node -> next = NULL;

    if ( * point_to_head == NULL) {
      required_node -> index = 0;
      * point_to_head = required_node;

      return;
    }
    int j = 0;

    while (temp -> next != NULL) {
      j = j + 1;
      temp = temp -> next;
    }

    required_node -> index = j + 1;
    temp -> next = required_node;
    return;
  }

  void insert(int val, int ind) {

    ListNode ** point_to_head = & head;
    ListNode * required_node = new ListNode();

    ListNode * destination = * point_to_head;

    required_node -> value = val;
    required_node -> index = ind;

    required_node -> next = NULL;

    if ( head == NULL) {
      head = required_node;
      return;
    }

    while (destination -> index != ind - 1) {
      destination = destination -> next;
    }

    ListNode * temp = destination -> next->next;
    destination -> next = required_node;
    required_node -> next = temp;

    return;

  }

  void print() {
    ListNode * traverse;
    traverse = head;
    while (traverse != NULL) {
      cout << traverse -> value << "|" <<traverse->index<<" ";
      traverse = traverse -> next;
    }

    cout << endl;
  }

  void Delete_by_value(int val) {
    

    if (head == NULL) {
      // empty list
      return;
    }

    if (head -> value == val) {
      head = head -> next;
      
    }
    ListNode * temp;
    ListNode * traverse;
    traverse = head;
    while (traverse != NULL) {
      if (traverse -> value == val && traverse!=head) {
        temp -> next = traverse -> next;
      }
      temp = traverse;
      traverse = traverse -> next;
    }

    traverse = head;
    int i = 0;
    while (traverse != NULL) {
      traverse -> index = i;
      i++;
      traverse = traverse -> next;
    }
  }

  void Delete_by_position(int pos) {
    ListNode ** point_to_head = & head;

    if ( * point_to_head == NULL)
      return;

    ListNode * temp = * point_to_head;

    if (pos == 0) {

      * point_to_head = temp -> next;

      
      return;
    }

    for (int i = 0; temp != NULL && i < pos - 1; i++)
      temp = temp -> next;

    if (temp == NULL || temp -> next == NULL)
      return;

    ListNode * next = temp -> next -> next;

    

    temp -> next = next;

    ListNode *traverse = head;
    int i = 0;
    while (traverse != NULL) {
      traverse -> index = i;
      i++;
      traverse = traverse -> next;
    }
  }

  int Get_value(int ind) {
    ListNode * traverse;
    traverse = head;
    while (traverse != NULL) {
      if (traverse -> index == ind)
        return traverse -> value;
      else
        traverse = traverse -> next;
    }

    return -1;

  }

  int Search(int key) {
    ListNode * traverse;
    traverse = head;

    while (traverse != NULL) {
      if (traverse -> value == key) {
        return traverse -> index;
      }
      traverse = traverse -> next;
    }

    return -1;
  }

  int Length() {
    ListNode * traverse;
    traverse = head;
    int len = 0;
    while (traverse != NULL) {
      len++;
      traverse = traverse -> next;
    }

    return len;
  }

};
int main() {
  linked_list demo;
  cout<<"Output after append: \n";
  demo.append(-1);
  demo.append(0);
  demo.append(7);
  demo.append(6);
  demo.append(-1);
  demo.append(11);
  demo.append(0);
  demo.print();
  
  cout<<"\nOutput after insert(): \n";
  demo.insert(5,3);
  demo.insert(98,6);
  demo.print();
  
  cout<<"\nOutput after delete_by_value(): \n";
  demo.Delete_by_value(5);
  demo.print();
  
  cout<<"\nOutput after delete_by_position(): \n";
  demo.Delete_by_position(3);
  demo.print();
  
  cout<<"\nOutput after get_value(): \n";
  cout << demo.Get_value(2) << endl;

  cout<<"\nOutput after Search(): \n";
  cout << demo.Search(500) << endl;

  cout<<"\nOutput after Length(): \n";
  cout << demo.Length();
  
}
