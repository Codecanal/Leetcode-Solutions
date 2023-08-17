#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node * next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertNode(int val, node * &root)
{
    node * newnode = new node(val);
    node * temp = root;
    if(root == NULL)
    {
        root->data = val;
        root->next = NULL;
    }
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;

}
void display(node * root)
{
    node * temp = root;
    if(temp->data == 0)
    {
        cout<<"This is the result linked list"<<endl;
        temp = temp->next;
    }
    while(temp != NULL)
    {
        
        cout<<temp->data<<" ";
        temp = temp->next;
        
    }
}
string createstring(node * root)
{
    node * temp = root;
    string b;
    while(temp!=NULL)
    {
        b = b + to_string(temp->data);
        temp = temp->next;
    }
    return b;

}
int main()
{
//    node * a = new node(10);
//    node * b = new node(20);
//    a->next = b;
//    node * temp = a;
//    cout<<temp->data<<endl;
//    cout<<temp->next->data<<endl;
    // node * root = new node(10);
    // insertNode(20, root);
    // insertNode(30,root);
    // insertNode(40,root);
    // insertNode(50,root);
    // display(root);

    //creating linked list 1;
    node * root1 = new node(1);
    insertNode(2,root1);
    node * root2 = new node(2);
    insertNode(3,root2);
    //display(root1);
    //create_string(root1)
    //display(root2);
    int one = stoi(createstring(root1));
    int two = stoi(createstring(root2));
    cout<<one<<endl;
    cout<<two<<endl;
    int sum = one+two;
    node * root3 = new node(0);
    while(sum>0)
    {
        int temp = sum%10;
        insertNode(temp,root3);
        sum = sum/10;
    }
    display(root3);     





}