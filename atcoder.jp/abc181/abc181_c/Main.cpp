#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
int main ()
    {

    int n;
    cin>>n;

    vector<pair<int, int>> a (n);

    for (int i = 0; i < n; i ++)
        {

        int x, y;
        cin>>x>>y;
        pair<int, int> s = {x, y};
        a [i] = s;

        }

    for (int x = 0; x < n; x ++)
        for (int y = 0; y < n; y ++)
            for (int z = 0; z < n; z ++)
                {

                if (x == y || x == z || y == z)
                    continue;


                if (a [z].f == a [x].f || a [z].s == a [x].s || a [y].f == a [x].f || a [y].s == a [x].s)
                    {

                    if ((a [z].f == a [x].f && a [x].f == a [y].f) || (a [z].s == a [y].s && a [y].s == a [x].s))
                        {
                        cout<<"Yes";
                        return 0;
                        }

                    else
                        continue;

                    }

                else if ((a [y].f - a [x].f) * (a [z].s - a [x].s) ==
                         (a [y].s - a [x].s) * (a [z].f - a [x].f ))
                    {

                    cout<<"Yes";
                    return 0;

                    }

                }

    cout<<"No";

    return 0;
    }


