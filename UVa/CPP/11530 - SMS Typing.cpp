#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
    using namespace  std  ;


    int main()

    {
        int I,T,i,size,count ;
        string texts;
        
        cin >> T ;
        
        for(I = 0 ;I <= T;I++ )
        {
            
            getline(cin,texts);
            size = texts.length() ;
            count = 0 ;
            for(i = 0 ; i < size ; i++)
            {
                if(texts[i] == ' ' || texts[i] == 'a' || texts[i] == 'd' || texts[i] == 'g' || texts[i] == 'j' || texts[i] == 'm' || texts[i] == 'p' || texts[i] == 't' || texts[i] == 'w')
                {
                    count += 1 ;
                }
                else if(texts[i] == 'b' || texts[i] == 'e' || texts[i] == 'h' || texts[i] == 'k' || texts[i] == 'n' || texts[i] == 'q' || texts[i] == 'u' || texts[i] == 'x')
                {
                    count += 2 ;
                }
                if(texts[i] == 'c' || texts[i] == 'f' || texts[i] == 'i' || texts[i] == 'l' || texts[i] == 'o' || texts[i] == 'r' || texts[i] == 'v' || texts[i] == 'y')
                {
                    count += 3 ;
                }
                if(texts[i] == 's' || texts[i] == 'z')
                {
                    count += 4 ;
                }
            }
            
            //cout << "Case #" << I << ": " << count  << endl;
            if(I != 0)
            {
                cout << "Case #" << I << ": " <<count << endl;
            }
        }
        return 0 ;
    }
    
