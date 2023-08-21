#include<bits/stdc++.h>

    using namespace std;

    int main()

    {
        int T,I,size;
        int digit ;
        cin >> T ;
        string str ;
        for(I = 0 ; I <= T ; I++)
        {
            getline(cin,str);
            size = str.length() ;
            //cout << size << endl ;
            if(size == 3)
            {
                if(str[0] == 'o' && str[2] == 'e')
                {
                    digit = 1 ;
                }
                else if (str[0] == 'o' && str[1] == 'n')
                {
                    digit = 1 ;
                }
                else if(str[1] == 'n' && str[2] == 'e')
                {
                    digit = 1 ;
                }
                else if(str[0] == 't' && str[2] == 'o')
                {
                    digit = 2 ;
                }
                else if (str[0] == 't' && str[1] == 'w')
                {
                    digit = 2 ;
                }
                else if(str[1] == 'w' && str[2] == 'o')
                {
                    digit = 2 ;
                }
            }
            else
            {
                digit = 3 ;
            }
            if(I != 0)
            {
                cout << digit << endl ;
            }
        }
        return 0 ;
    }