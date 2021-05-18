#include <iostream>
using namespace std;

int main()
{

    long long int a[500001], size, i, j, num, op = 0, number;

    cin >> size;

    for (i = 0; i < size; i++)
    {

        cin >> a[i];
    }

    i = 0;

    while (i < size)
    {

        if (a[i] != 0)
        {

            op++;

            num = a[i];

            for (j = i; j < size; j++)
            {

                if (num == a[j])
                {

                    a[j] = 0;
                }

                else
                {

                    number = j;

                    break;
                }
            }

            i = number;
        }

        else
        {

            i = i + 1;
        }
    }

    cout << op;

    return 0;
}
