#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        int hsh[7]={0};
        int num =0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='I')
            {
                hsh[0]++;
            }
            else if(s[i]=='V')
            {
                hsh[1]++;
            }
            else if(s[i]=='X')
            {
                hsh[2]++;
            }
            else if(s[i]=='L')
            {
                hsh[3]++;
            }
            else if(s[i]=='C')
            {
                hsh[4]++;
            }
            else if(s[i]=='D')
            {
                hsh[5]++;
            }
            else if(s[i]=='M')
            {
                hsh[6]++;
            }
        }
            num = hsh[0] + hsh[1]*5 + hsh[2]*10 + hsh[3]*50 + hsh[4]*100 + hsh[5]*500 + hsh[6]*1000;
            for(int i=0;i<s.size()-1;i++)
            {
                if((s[i]=='I' && s[i+1]=='V') || (s[i]=='I' && s[i+1]=='X'))
                {
                    num -= 2;
                } 
                if((s[i]=='X' && s[i+1]=='L') || (s[i]=='X' && s[i+1]=='C'))
                {
                    num -= 2*10;
                }
                if((s[i]=='C' && s[i+1]=='D') || (s[i]=='C' && s[i+1]=='M'))
                {
                    num -= 2*100;
                }  
            }
            return num;
        
    }
};
int main()
{
    
    return 0;
}