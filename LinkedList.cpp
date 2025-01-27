#include <iostream>
using namespace std;
typedef struct  Node{
    int data;
    Node*link;
}Node;
Node * insert(Node* start){
    int data;
    cout<<"enter the number you want to enter"<<endl;
    cin>>data;
    Node *ptr=(Node*)malloc(sizeof(Node));
    if(ptr==NULL){
        cout<<"memory allocation failed"<<endl;
        return start;
    }
    ptr->data=data;
    ptr->link=start;
    start=ptr;
    return start;
}
void Display(Node* start){
    Node* ptr=start;
    while(ptr!=NULL){
        cout<<ptr->data<<"->";
        ptr=ptr->link;
    }
    cout<<"NULL"<<endl;
}
void count(Node* start){
    Node* ptr=start;
    int i=0;
    while(ptr!=NULL){
        i++;
        ptr=ptr->link;
    }
    cout<<"Number of the Nodes are :"<<i<<endl;
    cout<<endl;
}
void search(Node* start){
    Node* ptr=start;
    int target,i=1;
    cin>>target;
    while(ptr!=NULL){
        if(target==ptr->data){
            cout<<"target found at node "<<i <<endl;
            return;
        }
        else{
            i++;
        ptr=ptr->link;}
    }
    
}
void greatest(Node* start){
    Node* ptr=start;
    int max=ptr->data;
    while(ptr!=NULL){
        if(max<ptr->data){
            max=ptr->data;
        }
        ptr=ptr->link;
    }
    cout<<"greates numbers are "<<max<<endl;
}
 int main(){
     Node* start=NULL;
     int choice;

    while (1) {
        printf("\nEnter what you want to do with the linked list:\n");
        printf("1. Insert\n2. Display\n3. Exit\n4. Search\n5. Node Count\n6. Greatest in Linked List\n");
        printf("Your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: start = insert(start); break;
            case 2: Display(start); break;
            case 4: search(start); break;
            case 5: count(start); break;
            case 6: greatest(start); break;
            case 3: exit(0); break;
            default: printf("Invalid choice. Please try again.\n"); break;
        }}
     return 0;
 }
