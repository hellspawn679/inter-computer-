#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int s;
        cin >> s;
        int nu = 0;
        int i = 0;
        while (s > 0)
        {
            nu += (s % 10) * pow(2, i);
            s = s / 10;
            i++;
        }

        if (nu % 2 == 1)
        {
            int ans = 0;
            nu = nu - 1;
            for (int j = 0; j < n; j++)
            {
                for (int h = 0; h < n; h++)
                {
                    if (pow(2, j) + pow(2, h) == nu)
                    {
                        cout << "yes" << endl;
                        ans = 1;
                        break;
                    }
                }
                if (ans == 1)
                {
                    break;
                }
            }
            if (ans == 0)
            {
                cout << "no" << endl;
            }
        }
        else
        {
            while (nu % 2 == 0)
            {
                nu = nu / 2;
                n--;
            }
            int ans = 0;
            nu=nu-1;
            for (int j = 0; j < n; j++)
            {
                for (int h = 0; h < n; h++)
                {
                    if (pow(2, j) + pow(2, h) == nu)
                    {
                        cout << "yes" << endl;
                        ans = 1;
                        break;
                    }
                }

                if (ans == 1)
                {
                    break;
                }
            }
            if (ans == 0)
            {
                cout << "no" << endl;
            }
        }
    }
    return 0;
}
