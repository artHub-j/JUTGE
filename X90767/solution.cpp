#include "llista.hpp"

Llista::Llista(const vector<int> &v) : _prim(NULL), _long(v.size())
// Pre: True
// Post: El p.i. conté els elements de v amb el mateix ordre.
{
    if (not v.empty())
    {
        node *p = new node;
        p->info = v[0];
        _prim = p;
        for (unsigned int i = 1; i < v.size(); i++)
        {
            node *aux = new node;
            aux->info = v[i];
            aux->seg = NULL;
            p->seg = aux;
            p = p->seg;
        }
    }
    else
    {
        _prim = NULL;
        _long = 0;
    }
}

// Solucio Professor:
// Llista::Llista(const vector<int> &v) : _prim(NULL), _long(v.size())
// {
//     node *p, *pant = NULL;
//     for (int i = 0; i < v.size(); i++)
//     {
//         p = new node;
//         p->info = v[i];
//         p->seg = NULL;
//         if (pant == NULL)
//             _prim = p;
//         else
//             pant->seg = p;
//         pant = p;
//         _long++;
//     }
// }
