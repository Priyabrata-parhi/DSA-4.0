#include <iostream>
using namespace std;

int main()
{

    // For-loop
    for (int count = 1; count <= 10; count = count + 1)
    {
        cout << "Priyabrata" << endl;
    }

    // counting from 1 to 10
    for (int i = 1; i <= 10; i++)
    {
        cout << i << endl;
    }

    // Break keyword
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " ";
        if (i == 5)
        {
            break; // ouput 1,2,3,4,5
        }
    }

    // continue keyword
    for (int i = 1; i <= 5; i++)
    {
        if(i == 4){
            continue;    // 4 skip ho jayega --> output 1,2,3,5
        }
        cout << i << " ";
    }

    // While-loop
    int i = 1;
    while(i<=5){
        cout << i << " ";
        i = i + 1;
    }
}
