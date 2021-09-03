#include <iostream>
#include <climits>
using namespace std;
template<typename T>
class stackarray
{
    T *data;
    int nextindex;
    int capacity;

public:
    stackarray()
    {
        data = new T[4];
        nextindex = 0;
        capacity = 4;
    };
    int size()
    {
        return nextindex;
    }
    bool isempty()
    {
        return nextindex == 0;
    }
    void push(T element)
    {
        if (nextindex == capacity)
        {
            T *newdata = new T[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                newdata[i] = data[i];
            }
            capacity *= 2;
            delete[] data;
            data = newdata;
        }
        data[nextindex] = element;
        nextindex++;
    }
    T pop()
    {
        if (isempty())
        {
            cout << "empty";
            // return INT_MIN;
            return 0;
        }
        nextindex--;
        return data[nextindex];
    }
    T top()
    {
        if (isempty())
        {
            cout << "empty";
            // return INT_MIN;
            return 0;
        }
        return data[nextindex - 1];
    }
};
int main()
{
    stackarray<char> s1;
    s1.push(100);
    s1.push(101);
    s1.push(102);
    s1.push(103);
    s1.push(104);
    cout << s1.top() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.size();
    cout << endl;
    cout << s1.isempty();
}