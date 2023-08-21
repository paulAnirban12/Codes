#include<bits/stdc++.h>

    using namespace std;

    int main()

    {
        int I = 0,i ;
        string str ;
        while(getline(cin,str))
        {
            if(str == "#")
                break;
            I++ ;
            if(str == "HELLO")
            {
                cout << "Case " << I << ": ENGLISH" << endl ; 
            }
            else if(str == "HOLA")
            {
                cout << "Case " << I << ": SPANISH" << endl ; 
            }
            else if(str == "HALLO")
            {
                cout << "Case " << I << ": GERMAN" << endl ; 
            }
            else if(str == "BONJOUR")
            {
                cout << "Case " << I << ": FRENCH" << endl ; 
            }
            else if(str == "CIAO")
            {
                cout << "Case " << I << ": ITALIAN" << endl ; 
            }
            else if(str == "ZDRAVSTVUJTE")
            {
                cout << "Case " << I << ": RUSSIAN" << endl ; 
            }
            else 
            {
                cout << "Case " << I << ": UNKNOWN" << endl ; 
            }
        }
        return 0 ;
    }