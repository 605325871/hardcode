#include <iostream>
using namespace std;

template <class K>
struct bstnodetree
{
    bstnodetree<K> *_left;
    bstnodetree<K> *_right;

    K _key;

    bstnodetree(const K &key)
        : _left(nullptr), _right(nullptr), _key(key);
    {
    }
};

template <class K>
class bsttree
{
    typedef bstnodetree<K> Node;
public:
    bsttree()
    :_root(nullptr)
    {}
    bsttree(const bsttree<K> &t)
    {
       
    }
    bsttree<k>& opreator=(bsttree<K> t)
    {
        std::swap(_root,t._root);
         return *this;
    }



    Node* _copy()
    bool Insert(const K &key);
    Node *Find(const K &key);
    bool Erase(const K &key);
    void Inorder();

private:
    void _inoreder(Node *root);
    Node *_root = nullptr;
};
