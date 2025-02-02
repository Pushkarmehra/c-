#include <iostream>
#include <stdlib.h>
using namespace std;

typedef struct node {
    int info;
    struct node *link;
} node;

node* insert(node *start) {
    int data;
    cout<<"Enter the data: ";
    cin>>data;
    node* ptr = new node ;
    if (ptr == NULL) {
        cout<<"allocation failed.\n";
        return start;
    }

    ptr->info = data;
    ptr->link = start;
    start = ptr;

    return start;
}

void search(node *start){
    int target;
    cout<<"Enter the number you want to search in the linked list:"<<endl;
    cin>>target;
    node *ptr = start;
    while (ptr != NULL) {
        if(ptr->info == target){
            cout<<"Found %d in the list.\n"<<target;
            return;
        }
        ptr = ptr->link;
    }
    cout<< target<<"not found in the list.\n";
}

void display(node *start) {
    node *ptr = start;
    if (ptr == NULL) {
        cout<<"List is empty."<<endl;
        return;
    }
    while (ptr != NULL) {
        cout<<ptr->info<<" ";
        ptr = ptr->link;
    }
    cout<<"\n";
}
void greatest(node *start) {
    if (start == NULL) {
        cout<<"List is empty.\n";
        return;
    }

    node *ptr = start;
    int max = ptr->info;
    while (ptr != NULL) {
        if (max < ptr->info) {
            max = ptr->info;
        }
        ptr = ptr->link;
    }
    cout<<"The greatest number in the linked list is "<<max;
}

void count(node *start){
    node *ptr = start;
    int i = 0;
    while (ptr != NULL) {
        i++;
        ptr = ptr->link;
    }
    cout<<"There are "<< i <<" nodes in the list.\n";
}

node* firstdeletion(node *start) {
    if (start == NULL) {
        cout<<"List is empty, nothing to delete.\n";
        return start;
    }

    node *ptr = start;
    start = start->link;
    free(ptr);

    cout<<"First node is deleted.\n";
    return start; 
}

node* lastdeletion(node *start) {
    if (start == NULL) {
        cout<<"List is empty, nothing to delete.\n";
        return start;
    }

    node *ptr = start;
    node *preptr = NULL;
    while (ptr->link != NULL) {
        preptr = ptr;
        ptr = ptr->link;
    }
    if (preptr != NULL) {
        preptr->link = NULL;
    } else {
        start = NULL;
    }
    free(ptr);
    cout<<"Last node is deleted."<<endl;
    return start; 
}

node* selecteddeletion(node *start, int tar) {
    if (start == NULL) {
        cout<<"List is empty, nothing to delete.\n";
        return start;
    }

    node *ptr = start;
    node *preptr = NULL;
    if (ptr != NULL && ptr->info == tar) {
        start = ptr->link;
        free(ptr);
        cout<<tar<<" data node is deleted."<<endl;
        return start;
    }

    while (ptr != NULL && ptr->info != tar) {
        preptr = ptr;
        ptr = ptr->link;
    }

    if (ptr == NULL) {
        cout<<tar<<"not found in the list.\n";
        return start;
    }

    preptr->link = ptr->link;
    free(ptr);
    cout<<tar<<" data node is deleted.\n";
    return start;
}
node* merge(node *start, node *start2) {
    if (start == NULL) {
        return start2;
    }
    node *ptr = start;
    while (ptr->link != NULL) {
        ptr = ptr->link;
    }
    ptr->link = start2;
    cout<<"Lists merged.\n";
    return start;
}

node* rev(node *start) {
    node *current = start;
    node *previous = NULL;
    node *next = NULL;

    while (current != NULL) {
        next = current->link;
        current->link = previous;
        previous = current;
        current = next;
    }

    start = previous;
    return start;
}
node* sorting(node* start) {
    if (start == NULL || start->link == NULL) {
        return start;
    }

    node *ptr;
    int swapped;

    do {
        swapped = 0;
        ptr = start;

        while (ptr->link != NULL) {
            if (ptr->info > ptr->link->info) {
                int temp = ptr->info;
                ptr->info = ptr->link->info;
                ptr->link->info = temp;
                swapped = 1;
            }
            ptr = ptr->link;
        }
    } while (swapped);

    return start;
}

int main() {
    node *start = NULL;
    node *start2 = NULL;
    int chose;

    while (1) {
        cout<<"Enter what you want to do with the linked list:\n0. Exit\n";
        cout<<"1. Insert\n2. Display\n3. Search\n4. Nodes count\n5. Greatest in list\n6. First del\n7. Last del\n8. Selected del\n9. Merge\n10. Reverse \n11.sorting\n";
        cin>>chose;

        switch (chose) {
            case 1: 
                start = insert(start);
                cout<<"For second linked list:\n";
                start2 = insert(start2);
                break;
            case 2: 
                display(start); 
                break;
            case 3: 
                search(start); 
                break;
            case 4:
                count(start); 
                break;
            case 5:
                greatest(start); 
                break;
            case 6: 
                start = firstdeletion(start); 
                break;
            case 7: 
                start = lastdeletion(start); 
                break;
            case 8: 
                {
                    int tar;
                    cout<<"Enter the value to delete: ";
                    cin>>tar;
                    start = selecteddeletion(start, tar);
                }
                break; 
            case 9:
                start = merge(start, start2); 
                break;
            case 10: 
                start = rev(start); 
                break;
            case 11:
                start= sorting(start);
                break;
            case 0: 
                exit(0); 
                break;
            default: 
                cout<<"Invalid choice\n"; 
                break;
        }
    }

    return 0;
}
