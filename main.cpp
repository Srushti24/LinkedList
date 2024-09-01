#include <iostream>
using namespace std;
 

template<typename V> class LinkedList
{
public:
V val;
LinkedList* next;

LinkedList()
{
    next = NULL;
}
~LinkedList()
{

}

};

// Driver Code
int main(int argc, const char * argv[])
{
    // Print standard output
    // on the screen
    cout << "Creating Linked List" << "/n";
    LinkedList<int> b;
    b.val = 10;
    return 0;
}

