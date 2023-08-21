#include<bits/stdc++.h>

    using namespace std;

    int main()

    {
        int size,i,j,final ;
        string a ;
        while(getline(cin,a))
        {
            
            if(a == "*")
                break;
            final = 0 ;
            size = a.length() ;
            i = 1 ;
            int measure = 0 ;
            while (i < size)
            {
                j = i ;
                float sum = 0 ;
                
                while(a[i] != '/')
                {
                    measure++ ;
                    i++ ;
                }
                while(j <= measure)
                {
                    if(a[j] == 'W')
                    {
                        sum +=(float) 1 ;
                    }
                    else if(a[j] == 'H')
                    {
                        sum += 0.5 ;
                    }
                    else if(a[j] == 'Q')
                    {
                        sum += 0.25 ;
                    }
                    else if(a[j] == 'E')
                    {
                        sum += 0.125 ;
                    }
                    else if(a[j] == 'S')
                    {
                        sum += 0.0625 ;
                    }
                    else if(a[j] == 'T')
                    {
                        sum += 0.03125 ;
                    }
                    else if(a[j] == 'X')
                    {
                        sum += 0.015625 ;
                    }
                    j++ ;
                }
                if(sum == 1)
                {
                    final += sum ;
                }
                measure = i ;
                i++ ;
            }
            
            cout << final << endl;
            
        }
        return 0 ;
    }