// Square of Asterisks
#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Size: ";
    cin >> size;

    if( size >= 1 )
    {
        if( size <= 20 )
        {   
            int i{ 1 };
            while( i <= size )
            {
                cout << "*";
                ++i;
            }

            int l{ 1 };
            while( l <= (size - 2) )
            {
                cout << "\n*";
                int t{ 1 };
                while( t <= (size - 2) )
                {
                    cout << " ";
                    ++t;
                }
                cout << "*";
                ++l;
            }

            if (size > 1)
        {
            cout << "\n";
            int m{ 1 };
            while ( m <= size )
            {
                cout << "*";
                ++m;
            }
        }
    }
    else
    {
        cout << "Invalid size! Must be between 1 and 20.\n";
    }
    }
}