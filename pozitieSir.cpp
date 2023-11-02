#include <iostream>
#define NMAX 200000
using namespace std;
void insereaza(int, int, int*, int&);
int pozitieInserare(int, int*, int);
int main()
{
    int n, x, v[NMAX], lg, i, nr, poz;
    cin >> n >> x;
    for (lg = i = 0; i < n; i++)
    {
        cin >> nr;
        poz = pozitieInserare(nr, v, lg);
        insereaza(nr, poz, v, lg);
    }
    poz = pozitieInserare(x, v, lg);
    if (v[poz] != x)
    {
        cout << -1;
    }
    else
    {
        cout << poz+1;
    }
    return 0;
}
void insereaza(int x, int poz, int v[], int & lg)
{
    // insereaza pe x pe pozitia poz in vectorul v de lungime lg
    for (int i = lg; i > poz; i--)
    {
        v[i] = v[i-1];
    }
    v[poz] = x, lg++;
}
int pozitieInserare(int x, int v[], int lg)
{
    // caut pe x in vectorul sortat descrescator v[] de lungime lg
    // returnez pozitia unde trebuie inserat x in vectorul v[]
    // astfel incat vectorul sa ramana sortat descrescator
    int st = -1, dr = lg;
    while (dr-st > 1)
    {
        int mij = st + (dr-st)/2;
        if (v[mij] > x)
        {
            st = mij;
        }
        else
        {
            dr = mij;
        }
    }
    return dr;
}
// scor 0 - depasire limita memorie
