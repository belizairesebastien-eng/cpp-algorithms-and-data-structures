#include <iostream>
#include <string>
#include "doubly_linked_list.h"


DoublyLinkList::DoublyLinkList():head(nullptr), tail(nullptr){}
int DoublyLinkList::getHead(){
    return head->value;
}
int DoublyLinkList::getTail(){
    return tail->value;
}
void DoublyLinkList::push_front(int item){
    node* temp = new node(item);
      
    if (head == nullptr && tail == nullptr){
         head = temp;
        tail = temp;
        return;
    }

    if (head != nullptr && tail != nullptr){
        temp ->next = head;
        head -> previous = temp;
        head = temp;
    }
    }

void DoublyLinkList::push_back(int m){
    node *temp = new node(m);
    node * current = head;

    if (head == nullptr && tail == nullptr){
        head = temp;
        tail = temp;
        return;
    }

    if (tail != nullptr && head != nullptr){
        tail ->next = temp;
        temp -> previous = tail;
        tail = temp;
        return;
    }

       

    

    }
    void DoublyLinkList::remove_front(){
        if (head == nullptr){
            return;
        }
        node * current = head;
        current = current->next;
        if (current != nullptr){
                current->previous = nullptr;
        }
        delete head;
        head = current;
        return;

    }
    void DoublyLinkList::remove_back(){
        node *current = tail;

        if (tail == nullptr){
            return;
        }

        if (head == tail){
            delete tail;
            head = nullptr;
            tail = nullptr;
            return;
        }
        current = current -> previous;
        if (current != nullptr){
            current -> next = nullptr;
        }
            
        delete tail;
        tail = current;
            

    }

void DoublyLinkList::display(){
    node * current = head;
    while (current != nullptr){
        std::cout << current ->value << " ";
        current = current ->next;
    }
    std::cout << std::endl;
}
void DoublyLinkList::display_inverse(){
    node* current = tail;
    while(current != nullptr){
        std::cout << current ->value << " ";
        current = current->previous;
    }
    std::cout << std::endl;
}
