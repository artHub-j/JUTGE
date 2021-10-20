#include "llista.hpp"
#include <iostream>
using namespace std;

Llista::Llista(const vector<int> &v) : _long(v.size())
// Pre: True
// Post: El p.i. conté els elements de v amb el mateix ordre.
{
    _prim = new node;
    _prim->info = 0;
    _prim->seg = NULL;

    if (not v.empty())
    {
        node *pant = _prim;
        for (int i = 0; i < v.size(); i++)
        {
            node *p = new node;
            p->info = v[i];
            p->seg = NULL;

            pant->seg = p;
            pant = p;
            p = p->seg;
        }
    }
}