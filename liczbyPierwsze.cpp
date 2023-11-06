#include <iostream>
#include <math.h>

using namespace std;

void naive_1( int n)
{
    int i = 2, d;
    // i - liczba; n - przedział; d - dzielnik
    bool Prime = true;
    while( i <= n)
    {
        d = 2;
        while( i >= d)
        {
            if( i % d == 0) {
                Prime = false; 
            }
            else
            {
                d++;
            }
            
                
            if ( i == d)
            {
                //cout << i << " ";
                break;
            }
            if ( Prime == false)
                break;
            
            
        }
        i++;
        Prime = true;
    }
    //cout << endl << endl;
}

void naive_2( int n)
{
    int i = 3, d;
    // i - liczba; n - przedział; d - dzielnik
    bool Prime = true;
    //cout << "2 ";
    while( i <= n)
    {
        d = 3;
        if( i % 2 == 0)
            i++;
        while( i >= d)
        {
            if( i % d == 0) {
                Prime = false; 
            }
            else
            {
                d++;
            }
            
                
            if ( i == d)
            {
                //cout << i << " ";
                break;
            }
            if ( Prime == false)
                break;
            
            
        }
        i++;
        Prime = true;
    }
    //cout << endl << endl;
}

void naive_3( int n)
{
    int i = 3, d;
    // i - liczba; n - przedział; d - dzielnik
    //cout << "2 ";
    bool Prime = true;
    while( i <= n)
    {
        d = 3;
        if( i % 2 == 0)
            i++;
        while( i*i >= n)
        {
            if( i % d == 0) {
                Prime = false; 
            }
            else
            {
                d++;
            }
            
                
            if ( i == d)
            {
                //cout << i << " ";
                break;
            }
            if ( Prime == false)
                break;
            
            
        }
        i++;
        Prime = true;
    }
    //cout << endl << endl;
}

void sieveOfEratosthenes( int n)
{
    bool A[n];
    int super = 0;
    for( int i = 0; i < n; i++)
        A[i] = true;
    for( int i = 2; i*i <= n; i++)
    {
        if( A[i] == true)
            for( int j = i*i; j <= n; j+=i )
                A[j] = false;
    }

    for( int i = 2; i <= n; i++)
        if( A[i] == true)
        {
           // cout << i << " ";
           super++;
        }

}



int main()
{
    //naive_1(1000);
    //naive_2(1000);
    //naive_3(1000);
    sieveOfEratosthenes(1000);
}