#include <iostream>
#include <math.h>
using namespace std;

int minValue(int arr[][2])
{
    int s[6];

    s[0] = pow((arr[0][0] - arr[1][0]), 2) + pow((arr[0][1] - arr[1][1]), 2);
    s[1] = pow((arr[1][0] - arr[2][0]), 2) + pow((arr[1][1] - arr[2][1]), 2);
    s[2] = pow((arr[2][0] - arr[3][0]), 2) + pow((arr[2][1] - arr[3][1]), 2);
    s[3] = pow((arr[0][0] - arr[3][0]), 2) + pow((arr[0][1] - arr[3][1]), 2);
    s[4] = pow((arr[0][0] - arr[2][0]), 2) + pow((arr[0][1] - arr[2][1]), 2);
    s[5] = pow((arr[1][0] - arr[3][0]), 2) + pow((arr[1][1] - arr[3][1]), 2);

    int sideSquare = s[0];

    for (int i = 1; i < 6; i++)
    {
        if (sideSquare > s[i])
        {
            sideSquare = s[i];
        }
    }

    return sideSquare;
}

int main()
{
    int arr[4][2];

    int t;

    cin >> t;

    while (t--)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> arr[i][j];
            }
        }

        cout << minValue(arr) << endl;
    }

    return 0;
}