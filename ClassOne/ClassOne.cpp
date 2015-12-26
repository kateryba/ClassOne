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

    for (size_t i = 0; i < words.size(); ++i)
    {
        if (words[i] != ' ')
            cout << words[i];
        else
            cout << endl;
    }

    return;
}

const int Dim = 3;

void matrisProd(int a[Dim][Dim], int b[Dim][Dim], int c[Dim][Dim])
{
  
    for (int i = 0; i < Dim; i++)
    {
        for (int j = 0; j < Dim; j++)
        {
            c[i][j] = 0;

            for (int k = 0; k < Dim; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
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

    int matrisIn1[Dim][Dim] = { {1,2,3},{1,2,4},{1,2,5} };
    int matrisIn2[Dim][Dim] = { {1,0,0},{0,1,0},{0,0,1} };

    int matrixProdResult[Dim][Dim];
    
    matrisProd(matrisIn1, matrisIn2, matrixProdResult);

    matrisOut(matrisIn1);
    cout << endl;

    matrisOut(matrisIn2);
    cout << endl;

    matrisOut(matrixProdResult);
    cout << endl;

    cin.get();
    return 0;
}

