#include <iostream>


using namespace std;
class Nodes
{
public:

    int data;
    Nodes* next;


};

class LinkedList 
{
public:
    Nodes* start;
    
    LinkedList() 
    {
        start = NULL;
    
    }
    void create(Nodes* start)
    {
        Nodes* new_Node = NULL;

        new_Node = new Nodes;

        if (new_Node == NULL)
        {
            cout << "Memory not Allocated";

        }

        else
        {
            cout << "ENter the number you want to store:  \n";
            cin >> new_Node->data;
            new_Node->next = NULL;
        }

        if (start == NULL)
        {
            start = new_Node;
        }
        else
        {
            Nodes* hold = start;
            while (hold->next!=NULL)
            {
                hold = hold->next;
            }
            hold->next = new_Node;


        }

    }
    void create_Node_pos(Nodes *start,int pos) 
    {
        int count = 0;

        Nodes* faltoo = NULL;

        faltoo = start;


        Nodes* new_Node = NULL;

        new_Node = new Nodes;


        if (new_Node == NULL)
        {
            cout << "Memory not Allocated";

        }

        
        else
        {
            cout << "Enter the  number you want to store at pos :  "<<pos<<endl;
            cin >> new_Node->data;
            new_Node->next = NULL;
        }
        
        
        while (faltoo != NULL && count!=pos)
        {

            if (count == pos - 1)
            {
                new_Node->next = faltoo->next;
                faltoo->next=new_Node;
                break;
                
            }
            else {
                faltoo = faltoo->next;
                count++;
            }
        }


    }
    void print(Nodes* start)
    {
        Nodes* traverse = NULL;
        traverse = start;
        while (traverse != NULL)
        {
            cout  << traverse->data << "\t";
            traverse = traverse->next;

        }
    }

    void DeleteNodes(Nodes* start, int pos)
    {
        int count = 0;
        
        Nodes* faltoo = NULL;
        
        faltoo = start;

        while (faltoo->next != NULL)
        {
            
            if (count == pos-1)
            {
                delete (faltoo->next)->next;
                faltoo->next = NULL;
            }
            else {
                faltoo = faltoo->next;
                count++;




            }
        }

    
    }




};



int main()
{
    LinkedList L1;
    int n_nodes;
    cout << "Enter number of nodes you want your List to have: \n";
    cin >> n_nodes;
    Nodes* Key = NULL;
    Key = new Nodes();
    do 
    {
        
        L1.create(Key);
        
        n_nodes--;
    } while (n_nodes != 0);
    L1.create_Node_pos(Key, 2);
    L1.print(Key);
    L1.DeleteNodes(Key, 4);




}
