#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    try
    {
        /*
        1.
        error: ‘Cout’ was not declared in this scope
            Cout << "Success!\n";
        correct:
            cout << "Sucess!\n";
        2.
        error: missing terminating " character
            cout << "Success!\n;
        correct:
            cout << Success!\n"
        3.
        error: missing terminating " character
        error: ‘n’ was not declared in this scope
            cout << "Success" << !\n "        
        correct:
            cout << Success!\n"
        4.    
        error: ‘success’ was not declared in this scope
            cout << success << !\n "        
        correct:
            cout << Success!\n"
        5.
        error: conversion from ‘int’ to non-scalar type ‘std::string’
            string res = 7;
            vector<int> v(10);
            v[5] = res;
            cout << "Success!\n";
        correct:
            int res = 7;
            vector<int> v(10);
            v[5] = res;
            cout << "Success!\n";
        6.
        error: no match for call to ‘(std::vector<int>) (int)
            vector<int> v(10);
            v(5) = 7;
            if (v(5) != 7)
            cout << "Success!\n";
        correction:
            vector<int> v(10);
            v[5] = 7;
            if (v[5] == 7)
            cout << "Success!\n";
        7.
        error:‘cond’ was not declared in this scope
            if (cond)
                cout << "Success!\n";
            else
                cout << "Fail!\n";
        correction:
            int cont = 10;
            if (cond)
                cout << "Success!\n";
            else
                cout << "Fail!\n";
        8.
        error: Logical error
            bool c = false;
            if (c)
                cout << "Success!\n";
            else
                cout << "Fail!\n";
        correction:
            bool c = true;
            if (c)
                cout << "Success!\n";
            else
                cout << "Fail!\n";
        9.
        error:
            string s = "ape";
            boo c = "fool" < s;
            if (c)
                cout << "Success!\n";
        correction:
            string s = "ape";
            bool c = "fool" > s;
            if (c)
                cout << "Success!\n";
        */

        //keep_window_open();
        return 0;
    }
    catch (exception &e)
    {
        cerr << "error: " << e.what() << '\n';
        //keep_window_open();
        return 1;
    }
    catch (...)
    {
        cerr << "Oops: unknown exception!\n";
        //keep_window_open();
        return 2;
    }
}