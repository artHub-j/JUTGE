#include "llista.hpp"
#include <iostream>

void Llista::duplica()
// Pre: True
// Post: S'han duplicat els elements del p.i.
//       Exemple: [2 5 3] = > [2 2 5 5 3 3]
{
    int m = _long;
    node *p = _prim->seg;
    for (int i = 0; i < m; i++)
    {
        node *cp = new node;
        cp->info = p->info;

        cp->seg = p->seg;
        p->seg->ant = cp;
        p->seg = cp;
        cp->ant = p;
        p = cp;

        p = p->seg;
        _long++;
    }
}