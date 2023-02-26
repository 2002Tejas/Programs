#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////
// Structure for Singly Linear and Singly Circular
template<class T>
struct nodeS
{
    T data;
    struct nodeS *next;
};


////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////
// Class of Singly Linear Linked List

template<class T>
class SinglyLL
{
    public:
        struct nodeS<T> *First;
        int iCount;

        SinglyLL();

        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPosition(T no,int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPosition(int iPos);

        void Display();
};

template<class T>
SinglyLL<T> :: SinglyLL()
{
    First = NULL;
    iCount = 0;
}

template<class T>
void SinglyLL<T> :: InsertFirst(T no)
{
    struct nodeS<T> *newn = new nodeS<T>;

    newn->data = no;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
        iCount++;
    }
    else
    {
        newn -> next = First;
        First = newn; 
        iCount++;
    }
}

template<class T>
void SinglyLL<T> :: InsertLast(T no)
{
    struct nodeS<T> *newn = new nodeS<T>;

    newn->data = no;
    newn->next = NULL;

    if(First == NULL)
    {
        First =newn;
        iCount++;
    }
    else
    {
        struct nodeS<T> *temp = First;

        while(temp ->next!= NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
        iCount++;
    }
}

template<class T>
void SinglyLL<T> :: InsertAtPosition(T no,int iPos)
{
    if((iPos < 1) || (iPos >iCount+1))
    {
        cout<<"Invalid Position"<<"\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(no);
    }
    else if(iPos == iCount+1)
    {
        InsertLast(no);
    }
    else
    {
        struct nodeS<T> *newn = new nodeS<T>;

        newn->data = no;
        newn->next = NULL;
        struct nodeS<T> *temp = First;

        for(int iCnt = 1; iCnt < iPos-1;iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;

        iCount++;
    }
}

template<class T>
void SinglyLL<T> :: DeleteFirst()
{
    if(First ==NULL)
    {
        return;
    }
    else if(First -> next== NULL)
    {
        delete First;
        First = NULL;
        iCount--;
    }
    else
    {
        struct nodeS<T> *temp = First;
        First = First -> next;
        delete temp;
        iCount--;
    }
}

template<class T>
void SinglyLL<T> :: DeleteLast()
{
    if(First ==NULL)
    {
       return; 
    }
    else if(First -> next == NULL)
    {
        delete First;
        First = NULL;
        iCount--;
    }
    else
    {
        struct nodeS<T> *temp = First;

        while(temp->next->next !=NULL)
        {
            temp = temp ->next;
        }
        delete temp ->next;
        temp->next = NULL;

        iCount--;
    }
}

template<class T>
void SinglyLL<T> :: DeleteAtPosition(int iPos)
{
    if((iPos < 1) || (iPos >iCount))
    {
        cout<<"Invalid Position"<<"\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
       struct nodeS<T> *temp1 = First;
       for(int iCnt = 1; iCnt<iPos-1;iCnt++)
       {
            temp1 = temp1->next;
       } 

       struct nodeS<T> *temp2 = temp1->next;
       temp1->next = temp2->next;

       delete temp2;

       iCount--;

    }
}

template<class T>
void SinglyLL<T> :: Display()
{
    cout<<"Elements of Linked List are : "<<"\n";
    struct nodeS<T> *temp = First;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |->";
        temp = temp->next;
        
    }
    cout<<"NULL"<<"\n";
}

// End of Class of Singly Linear Linked List
///////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////
// Class of Singly Circular Linked List
template<class T>
class SinglyCL
{
    public:
        struct nodeS<T> *First;
        struct nodeS<T> *Last;

        SinglyCL();

        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPos(T no, int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);

        void Display();
        int Count();
};

template<class T>
SinglyCL<T>::SinglyCL()
{
    First = NULL;
    Last = NULL;
}

template <class T>
void SinglyCL<T>::InsertFirst(T no)
{
    struct nodeS<T> *newn = new nodeS<T>;

    newn->data = no;
    newn->next = NULL;

    if((First == NULL) && (Last == NULL))    // Empty LL
    {
        First = Last = newn;
        (Last)->next = First;
    }
    else    // LL contains atleast one nodeS
    {
        newn->next = First;
        First = newn;
        (Last)->next = First;
    }
}

template <class T>
void SinglyCL<T>::InsertLast(T no)
{
    struct nodeS<T> *newn = new nodeS<T>;

    newn->data = no;
    newn->next = NULL;

    if((First == NULL) && (Last == NULL))    // Empty LL
    {
        First = Last = newn;
        (Last)->next = First;
    }
    else    // LL contains atleast one nodeS
    {
        (Last) -> next = newn;
        Last = newn;
        (Last)->next = First;
    }
}

template <class T>
void SinglyCL<T>::Display()
{
    struct nodeS<T> *temp = First;

    cout<<"Elements of Linked list are : "<<"\n";

    do
    {
        cout<<"| "<<temp->data<<" |-> ";
        temp = temp -> next;
    }while(temp != Last->next);
    cout<<"\n";
}

template <class T>
int SinglyCL<T>::Count()
{
    struct nodeS<T> *temp = First;

    int iCnt = 0;
    do
    {
        iCnt++;
        temp = temp -> next;
    }while(temp != Last->next);
    return iCnt;
}

template <class T>
void SinglyCL<T>::DeleteFirst()
{
    struct nodeS<T> *temp = First;

    if((First == NULL) && (Last == NULL)) // Empty LL
    {
        return;
    }
    else if(First == Last)    // Single nodeS in LL
    {
        //free(*First);
        delete First;

        First = NULL;
        Last = NULL;
    }
    else    // If LL contains more than 1 nodeS
    {
        First = (First)->next;
        //free(temp);
        delete temp;

        (Last) ->next = First;
    }
}

template <class T>
void SinglyCL<T>::DeleteLast()
{
    struct nodeS<T> * temp = First;

    if((First == NULL) && (Last == NULL)) // Empty LL
    {
        return;
    }
    else if(First == Last)    // Single nodeS in LL
    { 
        delete First;

        First = NULL;
        Last = NULL;
    }
    else    // If LL contains more than 1 nodeS
    {
        while(temp->next != (Last))
        {
            temp = temp -> next;
        }

        delete temp->next;

        Last = temp; 
        (Last) ->next = First;
    }
}

template <class T>
void SinglyCL<T>::InsertAtPos(T no, int ipos)
{
    int iNodeCnt = 0, iCnt = 0;
    iNodeCnt = Count();
    struct nodeS<T> *newn = NULL;
    struct nodeS<T> *temp = First;

    if((ipos < 1) || (ipos > iNodeCnt + 1))
    {
        cout<<"Invalid position"<<"\n";
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == iNodeCnt+1)
    {
        InsertLast(no);
    }
    else
    {
        newn = new nodeS<T>;

        newn->data = no;
        newn->next = NULL;

        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }
}

template <class T>
void SinglyCL<T>::DeleteAtPos(int ipos)
{
    int iNodeCnt = 0, iCnt = 0;
    iNodeCnt = Count();
    struct nodeS<T> *temp1 = First;
    struct nodeS<T> *temp2 = NULL;

    if((ipos < 1) || (ipos > iNodeCnt))
    {
        cout<<"Invalid position"<<"\n";
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == iNodeCnt)
    {
        DeleteLast();
    }
    else
    {
        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp1 = temp1->next;
        }   
        temp2 = temp1 ->next;

        temp1->next = temp2->next;
        delete temp2;
    }
}

// End of Class of Singly Circular Linked List
////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////
// Structure of Doubly Linear and Circular Linked List

template<class T>
struct nodeD
{
    T data;
    struct nodeD *next;
    struct nodeD *prev;      // X
};


////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////
// Class of Doubly Linear Linked List

template<class T>
class DoublyLL
{
    public:
        struct nodeD<T> *First;
        struct nodeD<T> *Last;

        DoublyLL();
        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPos(T no,int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);

        void Display();
        int Count();
};

template<class T>
DoublyLL<T>::DoublyLL()
{
    First = NULL;
    Last = NULL;
}

template<class T>
void DoublyLL<T>:: InsertFirst(T no)
{
    struct nodeD<T> *newn = new nodeD<T>;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;      // X

    if(First == NULL)
    {
        First = newn;
        Last = newn;
    }
    else
    {
        newn->next = First;
        (First)->prev = newn;  // X

        First = newn;
    }
}

template<class T>
void DoublyLL<T>::InsertLast(T no)
{
    struct nodeD<T> *newn = new nodeD<T>;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;      // X

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        (Last) -> next = newn;
        newn->prev = Last;
        Last = newn;      // X
    }
}

template<class T>
void DoublyLL<T>::Display()
{
    struct nodeD<T> *temp = First;
    if(First == NULL && Last == NULL)
    {
        cout<<"Linked list is empty\n";
        return;
    }

    cout<<"Elements of Linked list are : \n";

    do
    {
        cout<<" |"<<temp->data<<" |<=>";
        temp = temp -> next;
    }while(temp != Last->next);

    cout<<"\n";
}

template<class T>
int DoublyLL<T>::Count()
{
    struct nodeD<T> *temp = First;
    int iCnt = 0;

    if(First == NULL && Last == NULL)
    {
        return iCnt;
    }

    do
    {
        iCnt++;
        temp = temp -> next;
    }while(temp != Last->next);

    return iCnt;
}

template<class T>
void DoublyLL<T>::DeleteFirst()
{
    if(First == NULL && Last == NULL)  // LL is empty
    {
        return;
    }
    else if((First)->next == NULL) // LL contains 1 nodeD
    {
        delete(First);
        First = NULL;
    }
    else    // LL contains more than 1 nodeD
    {
        First = (First) -> next;
        delete((First)->prev);               // X
        (First)->prev = NULL;              // X
    }
}

template<class T>
void DoublyLL<T>::DeleteLast()
{

    if(First == NULL && Last == NULL)  // LL is empty
    {
        return;
    }
    else if(First == Last) // LL contains 1 nodeD
    {
        delete(First);
        First = NULL;
        Last =NULL;
    }
    else    // LL contains more than 1 nodeD
    {
        Last = Last->prev;
        delete(Last->next);
        Last->next = NULL;
    }
}

template<class T>
void DoublyLL<T>::InsertAtPos(T no,int ipos)
{
    int NodeCnt = 0, iCnt = 0;
    struct nodeD<T> *newn = NULL;
    struct nodeD<T> *temp = NULL;

    NodeCnt = Count();

    if((ipos < 1) || (ipos > (NodeCnt + 1)))
    {
        printf("Invalid position\n");
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == NodeCnt+1)
    {
        InsertLast(no);
    }
    else
    {
        newn = new nodeD<T>;

        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;      // X

        temp = First;

        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp -> next;
        }

        newn->next = temp -> next;
        temp->next->prev = newn;    // X
        temp->next = newn;
        newn->prev = temp;      // X
    }
}

template<class T>
void DoublyLL<T>::DeleteAtPos(int ipos)
{
    struct nodeD<T> *temp1 = NULL;
    struct nodeD<T> *temp2 = NULL;
    int iCnt = 0, NodeCnt = 0;
    NodeCnt = Count();

    if((ipos < 1) || (ipos > NodeCnt))
    {
        printf("Invalid position\n");
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == NodeCnt)
    {
        DeleteLast();
    }
    else
    {
        temp1 = First;
        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp1 = temp1->next;
        }

        temp2 = temp1->next;

        temp1->next = temp2->next;  
        temp2->next->prev = temp1;      // X
        delete(temp2);
    }
}

// End of Class of Doubly Linear Linked List
/////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////
// Class of Doubly Circular Linked List

template<class T> 
class DoublyCL
{
    public:
        struct nodeD<T> *First;
        struct nodeD<T> *Last;

        DoublyCL();
        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPos(T no,int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);

        void Display();
        int Count();
};

template<class T> 
DoublyCL<T>::DoublyCL()
{
    First = NULL;
    Last = NULL;
}

template <class T>
void DoublyCL<T>::InsertFirst(T no)
{
    struct nodeD<T> *newn = new nodeD<T>; 

    newn->data = no;
    newn->next = NULL;
    newn -> prev = NULL;

    if((First == NULL) && (Last == NULL)) // LL is empty
    {
        First = newn;
        Last = newn;
    }
    else    // If LL contains one or more nodes
    {
        newn->next = First;
        (First)->prev = newn;
        First = newn; 
    }

    (First)->prev = Last;
    (Last)->next = First;
}

template <class T>
void DoublyCL<T>::InsertLast(T no)
{
    struct nodeD<T> *newn = new nodeD<T>;
    newn->data = no;
    newn->next = NULL;
    newn -> prev = NULL;

    if((First == NULL) && (Last == NULL)) 
    {
        First = newn;
        Last = newn;
    }
    else    
    {
        (Last) -> next = newn;
        newn->prev = Last;
        Last = newn;
    }

    (First)->prev = Last;
    (Last)->next = First;
}

template <class T>
void DoublyCL<T>::Display()
{
    struct nodeD<T> *temp = First;
    if(First == NULL && Last == NULL)
    {
        cout<<"Linked list is empty\n";
        return;
    }

    cout<<"Elements of Linked list are : \n";
    do
    {
        cout<<" |"<<temp->data<<" |<=>";
        temp = temp -> next;
    }while(temp != Last->next);

    cout<<"\n";
}

template <class T>
int DoublyCL<T>::Count()
{
    struct nodeD<T> *temp = First;
    int iCnt = 0;

    if(First == NULL && Last == NULL)
    {
        return iCnt;
    }

    do
    {
        iCnt++;
        temp = temp -> next;
    }while(temp != Last->next);

    return iCnt;
}

template<class T>
void DoublyCL<T>::DeleteFirst()
{
    if(First == NULL && Last == NULL)
    {
        return;
    }
    else if(First == Last)
    {
        delete(First);
        First = NULL;
        Last = NULL;
    }
    else
    {
        First = (First)->next;
        delete((First)->prev);     // free((*Last->next));

        (First)->prev = Last;
        (Last)->next = First;
    }
}

template<class T>
void DoublyCL<T>::DeleteLast()
{
    if(First == NULL && Last == NULL)
    {
        return;
    }
    else if(First == Last)
    {
        free(First);
        First = NULL;
        Last = NULL;
    }
    else
    {
        Last = (Last)->prev;
        delete((First)->prev);    //free((*Last)->next);

        (First)->prev = Last;
        (Last)->next = First;
    }
}

template<class T>
void DoublyCL<T>::InsertAtPos(T no,int ipos)
{
    struct nodeD<T> *temp = NULL;
    struct nodeD<T> *newn = NULL;
    int iNodeCnt = Count(), iCnt = 0; 

    if((ipos <1) || (ipos > iNodeCnt+1))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(ipos ==1)
    {
        InsertFirst(no);
    }  
    else if(ipos == iNodeCnt+1)
    {
        InsertLast(no);
    }
    else
    {
        struct nodeD<T> *newn = new nodeD<T>;

        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        temp = First;
        for(iCnt =1 ; iCnt < ipos-1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;
    }
}

template<class T>
void DoublyCL<T>::DeleteAtPos(int ipos)
{
    int iNodeCnt = Count();  
    struct nodeD<T> *temp = NULL;
    int iCnt = 0;

    if((ipos <1) || (ipos > iNodeCnt))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(ipos ==1)
    {
        DeleteFirst();
    }  
    else if(ipos == iNodeCnt)
    {
        DeleteLast();
    }
    else
    {
        temp = First;
        for(iCnt =1 ; iCnt < ipos-1; iCnt++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        delete(temp->next->prev);
        temp->next->prev = temp;
    }
}

// Class of Doubly Circular Linked List
////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
// Structure of  and Queue

template <class T>
struct nodeSQ
{
    T data;
    struct nodeSQ *next;
};

//////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
// Class of Stack
template <class T>
class Stack
{
    public:
        struct nodeSQ<T> *First;
        int iCount;

        Stack();

        bool IsStackEmpty();
        void Push(T no);      // Insert
        T Pop();              // Delete
        void Display();
};

template <class T>
Stack<T> :: Stack()
{
    First = NULL;
    iCount = 0;
}

template <class T>
bool Stack<T> :: IsStackEmpty()
{
    if(iCount == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

template <class T>
void Stack<T> :: Push(T no)  // InsertFirst
{
    struct nodeSQ<T> *newn = new nodeSQ<T>;

    newn->data = no;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
    
    iCount++;

    cout<<no<<" gets pushed in the stack succesfully"<<"\n";
}

template <class T>
T Stack<T> :: Pop()          // DeleteFirst
{
    if(First == NULL)
    {
        cout<<"Unable to pop the element as Stack is empty."<<"\n";
        return -1;
    }
    else 
    {
        T value = First -> data;
        struct nodeSQ<T> *temp = First;

        First = First ->next;
        delete temp;

        iCount--;

        return value;
    }
}

template <class T>
void Stack<T> :: Display()
{
    if(First == NULL)
    {
        cout<<"Stack is empty."<<"\n";
    }
    else 
    {
        cout<<"Elements of stack are : "<<"\n";

        struct nodeSQ<T> *temp = First;
        while(temp != NULL)
        {
            cout<<"| "<<temp->data<<" |-> ";
            temp = temp -> next;
        }
        cout<<" NULL"<<"\n";
    }
}


// End of Class of Stack
//////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
// Class of Queue

template <class T>
class Queue
{
    public:
        struct nodeSQ<T> *First;
        int iCount;

        Queue();

        bool IsQueueEmpty();
        void EnQueue(T no);      // Insert
        T DeQueue();              // Delete
        void Display();
};

template <class T>
Queue<T> :: Queue()
{
    First = NULL;
    iCount = 0;
}

template <class T>
bool Queue<T> :: IsQueueEmpty()
{
    if(iCount == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

template <class T>
void Queue<T> :: EnQueue(T no)  // InsertLast
{
    struct nodeSQ<T> *newn = new nodeSQ<T>;

    newn->data = no;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        struct nodeSQ<T> *temp = First;

        while(temp->next != NULL)
        {
           temp = temp ->next; 
        }

        temp->next = newn;
    }
    
    iCount++;

    cout<<no<<" gets pushed in the Queue succesfully"<<"\n";
}

template <class T>
T Queue<T> :: DeQueue()          // DeleteFirst
{
    if(First == NULL)
    {
        cout<<"Unable to remove the element as Queue is empty."<<"\n";
        return (T)-1;
    }
    else 
    {
        T value = First -> data;
        struct nodeSQ<T> *temp = First;

        First = First ->next;
        delete temp;

        iCount--;

        return value;
    }
}

template <class T>
void Queue<T> :: Display()
{
    if(First == NULL)
    {
        cout<<"Queue is empty."<<"\n";
    }
    else 
    {
        cout<<"Elements of Queue are : "<<"\n";

        struct nodeSQ<T> *temp = First;
        while(temp != NULL)
        {
            cout<<"| "<<temp->data<<" |-> ";
            temp = temp -> next;
        }
        cout<<" NULL"<<"\n";
    }
}

// End of Class of Queue
//////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

int main()
{


    return 0;
}