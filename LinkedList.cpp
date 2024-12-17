#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int _data)
    {
        data=_data;
        next=NULL;
    }
};
node *head=NULL,*tail=NULL;
int size=0;
int main()
{
    node *ni =new node(1);
    cout<<ni->data;
    cout<<"HI";
    return 0;
}
