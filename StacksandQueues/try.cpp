#include <iostream>
using namespace std;
#include <climits>
class Stackarray
{
    int *data;
    int capacity;
    int nextindex;

public:
    Stackarray(int totalsize)
    {
        data = new int[totalsize];
        nextindex=0;
        capacity = totalsize;
    }
    int size()
    {
        return nextindex;
    }
    bool empty()
    {
        return nextindex == 0;
    }
    int top()
    {
        if (empty())
        {
            cout << "empty stack";
            return INT_MIN;
        }
        return data[nextindex-1];
    }
    void push(int element)
    {
        if (nextindex == capacity)
        {
            cout << "stakfull";
            return;
        }
        data[nextindex] = element;
        nextindex++;
    }
    int pop()
    {
        if (empty())
        {
            cout << "empty stack";
            return INT_MIN;
        }
        nextindex--;
        return data[nextindex];
    }
};
int main()
{
    Stackarray s1(4);
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    cout << s1.top() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.size();
    cout << endl;
    cout << s1.empty();}