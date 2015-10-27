/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      Queue.h
 *   Purpose:   Class definition and source for class Queue<T>
 *   Author:    Dusan Rozman and Roman Chametka
 *   Date:      October 27th, 2015
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <string>

using namespace std;

template <class T>
class Queue
{
    class Node{
        friend class Queue;
        
        private:
            Node* next;
            Node* prev;
            T data;
    };
    public:
        Queue();
        Queue(Queue&);
        ~Queue();
    
        int push(T);
        void pop();
        T front();
        bool empty();
        int deleteNode(T);
        T getWithName(string);
    
        //Overloaded operators
        int operator+=(T);
        int operator-=(T);    
        T operator[](int);   
        bool operator!();
    
    private:
        Node* head;
        int size;

};

//Ctor 
template <class T>
Queue<T>::Queue() : head(0) { size = 0; }

//Copy Ctor
template <class T>
Queue<T>::Queue(Queue& original) {
    //Initialize new Queue
    size = 0;
    head = 0;
    
    //Variable for Queue traversal
    Node* curr = original.head;
    
    //Loop through original queue, add (copy) to new Queue
    while(curr != 0){
        push(curr->data);
        curr = curr->next;
    }

}

//Dtor
template <class T>
Queue<T>::~Queue() {
    Node* curr = head;
    while(curr != 0){
        delete curr;
        curr = curr->next;
    }
}


/*
  Function:  Queue::push(T)
  Purpose:   add a <T> to front of Queue
       in:   T*
   return:   int; 0 or 1
*/
template <class T>
int Queue<T>::push(T p){
    //Create new node for new data (passed in)
    Node* tmpNode = new Node;
    tmpNode->next = 0;
    tmpNode->prev = 0;
    tmpNode->data = p;
    
    //variables for traversal
    Node* curr = head;
    Node* prev = 0;
    
    //check if Queue is empty
    if(head == 0){
        head = tmpNode;
        return 0;
    }
    else{   //list is not empty
        while(curr->next != 0){
            curr = curr->next;
        }
        //Set pointers
        tmpNode->prev = curr;
        curr->next = tmpNode;
        return 0;
    }
    return 1;
}

/*
  Function:  Queue::pop()
  Purpose:   to remove first element
       in:   
   return:   void
*/
template <class T>
void Queue<T>::pop(){
    //If list isn't empty
    if(head != 0){
        //if only 1 element is in the list
        if(head->next == 0){            
            head = 0;
        }
        //else if more than one element
        else{
            head = head->next;
            head->prev = 0;     
        }     
    }
}


/*
  Function:  Queue::deleteNode()
  Purpose:   to remove <T> that's passed in from Queue
       in:   <T> you wish to delete
   return:   void
*/
template <class T>
int Queue<T>::deleteNode(T element){
    Node* curr = head;

    //List is not empty
    if (curr != 0){
        while(curr != 0){
            //if data matches the element
            if(curr->data == element){
                //if it's only element in the list
                if(curr->prev == 0 && curr->next == 0){
                    head = 0;
                
                }
                //if it's at the front;
                else if(curr->prev == 0){
                    head = curr->next;
                    curr->next->prev = 0;
                
                }
                //else if it's at the end
                else if(curr->next == 0){
                    curr->prev->next = 0;

                }
                //somewhere in the middle
                else{
                    curr->prev->next = curr->next;
                    curr->next->prev = curr->prev;
                }
                return 0;
            }
            //else keep searching
            curr = curr->next;
        }
    }
    return 1;
}

/*
  Function:  Queue::front()
  Purpose:   to return Pirate* at front of Queue
       in:   
   return:   Pirate*
*/
template <class T>
T Queue<T>::front(){    
    if (head != 0)
        return head->data;
    return 0;    
}

/*
  Function:  Queue::empty()
  Purpose:   check if Queue is empty
       in:   
   return:   boolean
*/
template <class T>
bool Queue<T>::empty(){
    if (head != 0)
        return false ;
    return true; 
}


/*
  Function:  Queue::getWithId(int)
  Purpose:   find apirate with certain Name
       in:   string
   return:   T
*/
template <class T>
T Queue<T>::getWithName(string name){
    Node* curr = head;
    while(curr != 0){
        if(curr->data->getName() == name)
            return curr->data;
        curr = curr -> next;
    }
    
    return NULL;
}

//******** Overloaded Operators: ********//

//Overload += operator, add to Queue
template <class T>
int Queue<T>::operator+=(T p){
    return push(p);
}

//Overload -= operator, delete from Queue
template <class T>
int Queue<T>::operator-=(T p){
    return deleteNode(p);
}

//Overload [] operator, return at index
template <class T>
T Queue<T>::operator[](int index){
    //if index is a positive number
    if (!(index < 0)){
        Queue::Node* curr = head;
        int counter = 0;
        
        //Traverse Queue until index is reached or curr node is null
        while((curr != 0) && (counter != index)){
            curr = curr->next;
            counter++;
        }
        
        //index is reached and curr is not null
        if(curr != 0) { return curr->data; }
    }
    return NULL;  //otherwise return NULL
}

//overload ! operator
template <class T>
bool Queue<T>::operator!(){
    return !(empty());
}

#endif
