#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k, index, query = 0, f = 0;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
        {
            query = query + arr[i];
            if (query < k)
            {
                index = i;
                break;
            }
            query = query - k;
        }
        if (query > k)
        {

            f = 1;
            index = query / k;
        }
        if (f == 0)
            cout << index + 1;
        else
            cout << index + n + 1;

        cout << endl;
    }
}
