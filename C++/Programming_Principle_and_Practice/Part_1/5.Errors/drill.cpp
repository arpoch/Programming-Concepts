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