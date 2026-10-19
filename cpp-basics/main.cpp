
#include <iostream>
using namespace std;

int main()
{
    int y = 5;
    int z = 17;
    int x = 8;

    if ((y % x) == 2)
    {
        if ((z % x) == (y % x))
        {
            cout << x << endl;

            x = x + 1;

            if ((z % x) == (y % x))
            {
                cout << "why" << endl;
            }
            else
            {
                cout << "what" << endl;
            }
        }
    }

    return 0;
}
