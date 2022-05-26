#include <iostream>
#include <vector>
using namespace std;

bool cmp(vector<int> &a, vector<int> &b)
{
    if (a.size() != b.size())
        return a.size() > b.size();
    for (int i = a.size(); i >= 0; --i)
    {
        if (a[i] != b[i])
            return a[i] > b[i];
    }
    return true;
}
vector<int> sub(vector<int> &A, vector<int> &B)
{
    vector<int> c;
    int t = 0;
    for (int i = 0, t = 0; i < A.size(); i++)
    {
        t = A[i] - t;
        if (i < B.size())
            t -= B[i]; // a[i] - b[i] -t
        c.push_back((t + 10) % 10);
        if (t < 0)
            t = 1;
        else
            t = 0;
    }
    while (c.size() > 1 && c.back() == 0)
        c.pop_back();
    return c;
}
int main()
{
    string a, b;
    vector<int> A, B;
    cin >> a >> b;
    for (int i = a.size() - 1; i >= 0; i--)
        A.push_back(a[i] - '0');
    for (int i = b.size() - 1; i >= 0; i--)
        B.push_back(b[i] - '0');

    if (cmp(A, B))
    {
        auto c = sub(A, B);
        for (int i = c.size() - 1; i >= 0; i--)
            printf("%d", c[i]);
    }
    else
    {
        printf("-");
        auto c = sub(B, A);
        for (int i = c.size() - 1; i >= 0; i--)
            printf("%d", c[i]);
    }
}