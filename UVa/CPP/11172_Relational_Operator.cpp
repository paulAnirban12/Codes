#include<bits/stdc++.h>

    using namespace std;

    int main()

    {
        int n,i,a,b ;
        cin >> n ;
        for(i = 1 ; i <= n ; i++)
        {
            cin >> a >> b ;
            if(a > b)
            {
                cout << ">" << endl ;
            }
            else if(a < b)
            {
                cout << "<" << endl ;
            }
            else
                cout << "=" << endl ;
        }
        return 0 ;
    }