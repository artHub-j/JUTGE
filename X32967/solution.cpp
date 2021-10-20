#include "llista.hpp"

Llista::Llista(const vector<int> &v) : _long(v.size())
// Pre: True
// Post: El p.i. conté els elements de v amb el mateix ordre.
{
    _prim = new node;
    _prim->ant = _prim;
    _prim->seg = _prim;
    if (not v.empty())
    {
        node *pant;
        pant = _prim;
        for (int i = 0; i < v.size(); i++)
        {
            node *p = new node;
            p->info = v[i];
            p->ant = NULL;
            p->seg = NULL;

            pant->seg = p;
            p->ant = pant;
            p->seg = _prim;
            _prim->ant = p;

            pant = p;
            p = p->seg;
        }
    }
}