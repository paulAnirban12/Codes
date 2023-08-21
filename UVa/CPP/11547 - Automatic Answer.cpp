#include<bits/stdc++.h>

    using namespace std;

    int main()

    {
        int test,i,j,n,final ;
        cin>>test ;
        for(i = 1 ; i <= test ; i++)
        {
            cin>>n ;
            int a = (567*n)/9 ;
            int b = a + 7492 ;
            int c = (b*235)/47 ;
            final = c - 498 ;
            int d ;
            j = 1 ;
            while(j <= 2)
            {
                d = final%10 ;
                final = final/10 ;
                j++ ;
            }
            final = d ;
            if(final < 0)
            final *= -1 ;
            cout << final << endl ;

        }
        return 0 ;
    }