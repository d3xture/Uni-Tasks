// code no 1
#include <iostream>
using namespace std;

const int K;
const int SIZE;
int main()
{
    string friends[5];
    friends[0] = "Ali";
    friends[1] = "fahim";
    friends[2] = "fahim";
    for (int i = 0; i < 3; i++)
    {
        cout << friends[i] << endl;
    }
    return 0;
}

// code no 2
#include <iostream>
using namespace std;
int main()
{
    int nos[SIZE];

    // input from user
    for (int i = 0; i < SIZE; i++)
    {
        cin >> nos[i];
    }
    // Print Array
    for (int i = 0; i < SIZE; i++)
    {
        cout << nos[i];
    }
    // Increment
    for (int i = 0; i < SIZE; i++)
    {
        nos[i] += K;
    }
    // Print Array
    for (int i = 0; i < SIZE; i++)
    {
        cout << nos[i];
    }
    // Multiply by K
    for (int i = 0; i < SIZE; i++)
    {
        nos[i] *= K;
    }
    // Print Array
    for (int i = 0; i < SIZE; i++)
    {
        cout << nos[i];
    }
    return 0;
}
