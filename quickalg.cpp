#include "quickdec.hh"
#include <cmath>
#include <iostream>

using namespace std;

// POMOCNICZA FUNKCJA ZAMIENIAJACA ELEMENTY

template <typename type>
void zamiana(type & elem1, type & elem2) 
{
    type elempom = elem1;              // elempom - element pomocniczy
    elem1 = elem2;                
    elem2 = elempom;                
}

// FUNKCJA QUICKSORT 

template <typename type>
void sortowanie(type tab[], type elemp, type elemo) 
{
    type i, j, elemsr;                           
    i = elemp;
    j = elemo;
    elemsr = tab[(elemp + elemo) / 2];  // elemsr jest elementem tablicy, ktory jest na srodku

    while (i <= j) 
    {

     while (tab[i] < elemsr) 
     {
        i++;
     }
     while (tab[j] > elemsr) 
     {
         j--;
     }
    if (i <= j) 
    {
        zamiana(tab[i], tab[j]);
        i++;
        j--;
    }
   }; 

// Sortowanie rekurencyjne mniejszych tablic
    if (elemp < j) 
    { 
        sortowanie(tab, elemp, j);
    }

    if (i < elemo) 
    {
        sortowanie(tab, i, elemo);
    }
}



// FUNKCJA SPRAWDZAJACA

template <typename type>
bool test (type tab[], type rozmiar) 
    {
    bool blad = false;
    for(type i = 0; i < rozmiar - 1; i++) 
	{
        if (tab[i] > tab[i+1]) 
	    {       
            blad = true;              
            }
	}
    return blad;
}
 
 
