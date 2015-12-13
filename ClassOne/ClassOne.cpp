// ClassOne.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void wordizer()
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

    return;
}

const int Dim = 3;

void matrisProd(int a[Dim][Dim], int b[Dim][Dim], int (&c)[Dim][Dim])
{
    int matrisProdSum = 0;
    for (int i = 0; i < Dim; i++)
    {
        for (int j = 0; j < Dim; j++)
        {
            c[i][j]= matrisProdSum + a[i][j] * b[j][i];
        }
        
    }
    return;
}

void matrisOut(int a[Dim][Dim])
{
    for (int i = 0; i < Dim; i++)
    {
        for (int j = 0; j < Dim; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return;
}


int dotProd(int a[Dim], int b[Dim])
{
    int prodSum = 0;
    for (int i = 0; i < Dim; i++)
    {
        prodSum = prodSum + a[i] * b[i];
    }
    return prodSum;
}

int main()
{
//    wordizer();
    int v[Dim] = { 1,2,3 };
    int vV[Dim] = { 4,2,3 };
    cout << dotProd(v, vV) << endl;

    int matrisIn[Dim][Dim] = {{1,2,3},{1,2,4},{1,2,5}};
    matrisOut(matrisIn);

    cin.get();
    return 0;
}

