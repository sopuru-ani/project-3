#include "binary.h"
#include <iostream>
using namespace std;

int main()
{
    
    Binary q;
    //cout << rand() % 101 << endl;
    for (int i = 0; i < 40; i++) {
        q.insert((rand() % 101));
    }
    q.dO();

}

