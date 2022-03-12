

#include <iostream>
#include <string>
#include<algorithm>

using namespace std;
//zad1
int min(int x, int y, int min)
{
    if (x > y)
    {
        min = y;
        return min;
    }

    else if (x < y)
    {
        min = x;
        return min;
    }

    else
        return 0;
    
}

void rzad_zd(char, int, int);
//zad5
int NumerWAlfabecie(char c)
{
    string alphabet = "abcdefghijklmnouprstuwxyz";

    for (int i = 0; i <= alphabet.length() - 1; i++)
    {
        
        if (!isdigit(c) && c == alphabet[i]) {
            return i + 1;
        }
        else if (c == ' ' || isdigit(c))
            return -1;
    }
}
int main()
{
    string a;
  
    
        getline(std::cin, a);
    
    cout << endl;
    for(int i=0;i<a.length();i++)
    {
        char c = a[i];
        c = tolower(c);
        int nr_litery = NumerWAlfabecie(c);
        cout << nr_litery << " ";
    }


    return 0;
}
//zad2
void rzad_zd(char ch, int i, int j)
{
    for (int x = 1; x < i; x++)
    {
        cout << endl;
    }
    for (int x = i; x <= j; x++)
    {
        cout << ch << endl;
    }

}

