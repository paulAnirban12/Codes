#include<bits/stdc++.h>

    using namespace std;

    int ascending(int x, int y)
    {
        if(x < y)
            return 0 ;
        else
            return 1 ;
    }
    int descending(int a,int b)
    {
        if(a > b)
        {
            return 0 ;
        }
        else
        {
            return 1 ;
        }
    }
    int main()

    {
        
        int T,I,first,second;
        int a[100],i,j ;
        cin>> T ;
        cout << "Lumberjacks:" << endl ;
        for(I = 1 ; I <= T ; I++)
        {

            int unordered = 0 ;
            int ordered = 0 ;
            cin>> first ;
            for(i = 1 ; i < 10 ; i++)
            {
                cin>>second ;
                if(first > second)
                {
                    ordered = 1 ;
                }
                else
                {
                    unordered = 1 ;
                }
                first = second ;
            }
            if(ordered == 1 && unordered == 1)
            {
                cout << "Unordered" << endl ;
            }
            else
            {
                cout << "Ordered" << endl ;
            }
        }    
        return 0 ;
    }