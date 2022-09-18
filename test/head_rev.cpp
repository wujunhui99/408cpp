#include <iostream>
#include <stdlib.h>
using namespace std;
typedef struct  Node{
    int num;
    struct Node * next;
}Node,*List;
void rev_list(List l);
int main(){
    List l = new Node;
    l->num = -1;
    l->next = new Node;
    Node * tail = l->next;
    for(int i = 0; i < 9 ;i++){
        tail->num = i;
        tail->next = new Node;
        tail = tail->next;
    }
    tail->num = 9;
    tail -> next - NULL;
    rev_list(l);
    Node * pio = l->next;
    while(pio != NULL){
        cout << pio->num << endl;
        pio = pio->next; 
             
    } 

}
void rev_list(Node * header){
    Node * pio = header->next;
    while(pio->next != NULL){
        Node * tmp = pio->next;
        pio->next = pio->next->next;
        tmp ->next = header->next;
        header->next = tmp;
    }
}