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

inline bool Find(node a, int x)
{
    if(a == NULL)
        return 1;
    while(a != NULL)
    {
        if(a -> n == x)
            return 0;
        a = a -> next;
    }
    return 1;
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
            if(Find(A, x))
                addBack(A, x);
        }
        while(A != NULL)
        {
            cout << A -> n << ' ';
            A = A -> next;
        }
        delete A;
    }
    return 0;
}
