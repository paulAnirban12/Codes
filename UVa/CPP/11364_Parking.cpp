#include<bits/stdc++.h>

    using namespace std;

    int main()

    {
        int T,I,i,n,j,swap ;
        int a[100] ;
        cin>>T ;
        for(I = 1 ; I <= T ; I++)
        {
            cin>>n ;
            for(i = 0 ; i < n ; i++)
            {
                cin>>a[i] ;
            }
            for(i = 0 ; i < n ; i++)
            {
                for(j = i+1 ; j < n ; j++)
                {
                    if(a[i] > a[j])
                    {
                        swap = a[i] ;
                        a[i] = a[j] ;
                        a[j] = swap ;
                    }
                }
            }
            int sum = 0 ;
            int dis = a[0] ;
            for(i = 1 ; i < n ; i++)
            {
               dis = a[i] - dis ;
               sum += dis ;
               dis = a[i] ;
            }
            cout << 2*sum << endl ;
        }
        return 0 ;
    }