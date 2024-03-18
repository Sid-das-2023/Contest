#include <iostream>
using namespace std;

int main()
{
    // input
    int t;
    cin >> t;
    int arr[4] = {0};
    while (t--)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[j];
        }

        // output
        int temp = (abs(arr[0] - arr[2]) == abs(arr[1] - arr[3]));
        {
            if ((arr[0] == arr[2]) || arr[1] == arr[3] || temp)
            {
                cout << "Yes" << endl;
            }
            else
                cout << "No" << endl;
        }
    }
}