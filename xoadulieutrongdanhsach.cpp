#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int n;
    Node* next;
};

typedef Node* node;

inline node createNode(int x)
{
    node res = new Node;
    res -> n = x;
    res -> next = NULL;
    return res;
}

inline void addBack(node &A, int x)
{
    if(A == NULL)
    {
        A = createNode(x);
        return;
    }
    node tmp = A;
    while(tmp -> next != NULL)
        tmp = tmp -> next;
    tmp -> next = createNode(x);
}

int main()
{
    int t = 1, n, x;
    //cin >> t;
    while(t--)
    {
        cin >> n;
        node A = NULL;
        while(n--)
        {
            cin >> x;
            addBack(A, x);
        }
        
        cin >> x;
        while(A != NULL)
        {
            if(A -> n != x)
                cout << A -> n << ' ';
            A = A -> next;
        }
        delete A;
    }
    return 0;
}
