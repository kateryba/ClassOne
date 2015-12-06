// ClassOne.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string words;
    cout << "Please type a sentence" << endl;
    getline(cin, words);
    
    for (int i = 0; i < words.size(); ++i)
    {
        if (words[i] != ' ')
            cout << words[i];
        else
            cout << endl;
    }

    return 0;
}

