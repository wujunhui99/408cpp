#include <iostream>
#include "CircularQueue.h"
using namespace std;
int main() 
{
    CircularQueue q;
    q.push(6);
    int x;
    bool w =q.pop(x);
    
    cout << w << '\t' <<x << endl;
    cout << "Hello, World!"<<endl;
    return 0;
}
