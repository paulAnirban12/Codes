#include<bits/stdc++.h>

    using namespace std;

    int main()

    {
        int i,size ;
        string msg ;
        while (getline(cin,msg))
        {
            
            for(i = 0 ; i < msg.length() ; i++)
            {
                if(msg[i] == 'A' || msg[i] == 'B' || msg[i] == 'C')
                {
                    msg[i] = '2' ;
                }
                else if(msg[i] == 'D' || msg[i] == 'E' || msg[i] == 'F')
                {
                    msg[i] = '3' ;
                }
                else if(msg[i] == 'G' || msg[i] == 'H' || msg[i] == 'I')
                {
                    msg[i] = '4' ;
                }
                else if(msg[i] == 'J' || msg[i] == 'K' || msg[i] == 'L')
                {
                    msg[i] = '5' ;
                }
                else if(msg[i] == 'M' || msg[i] == 'N' || msg[i] == 'O')
                {
                    msg[i] = '6' ;
                }
                else if(msg[i] == 'P' || msg[i] == 'Q' || msg[i] == 'R' || msg[i] == 'S')
                {
                    msg[i] = '7' ;
                }
                else if(msg[i] == 'T' || msg[i] == 'U' || msg[i] == 'V')
                {
                    msg[i] = '8' ;
                }
                else if(msg[i] == 'W' || msg[i] == 'X' || msg[i] == 'Y' || msg[i] == 'Z')
                {
                    msg[i] = '9' ;
                }
                
                
            }
            for(i = 0 ; i < msg.length() ; i++)
            {
                cout << msg[i] ;
            }
                cout << endl ;
        }
        
        return 0 ;
    }