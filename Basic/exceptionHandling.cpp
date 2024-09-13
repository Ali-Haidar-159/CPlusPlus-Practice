#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
    int arr[] = {10, 20, 30};


    try
    {
        int index = 10 ;

        if (index >= 3)
        {
            throw out_of_range("exception found");
        }
        else
            cout << arr[10] << endl;

    }
    catch (const out_of_range& e)
    {
        cerr << "Caught exception: " << e.what() << endl;
    }
    catch (...)
    {
        cerr << "Caught unknown exception" << endl;
    }

    // Alternative to getch()
    cout << "Press Enter to continue...";
    cin.ignore(); // Waits for user to press Enter

    return 0;
}
