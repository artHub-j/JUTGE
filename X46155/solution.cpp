#include "llista.hpp"
#include <iostream>

void Llista::eliminaposicionsparells()
// Pre: True
// Post: S'han eliminat els elements del p.i. de les posicions parells
//       Exemple: [2 5 3 8 1] => [2 3 1]
{
    node *p = _prim;
    node *pant = p;

    int m = _long;

    for (int i = 0; i < m / 2; i++)
    {
        if (p->seg != NULL)
            p = p->seg;
        pant->seg = p->seg;
        delete p;
        pant = pant->seg;
        p = pant;
        _long--;
    }
}