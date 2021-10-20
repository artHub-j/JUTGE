#include "llista.hpp"

void Llista::eliminaposicionsparells()
// Pre: True
// Post: S'han eliminat els elements del p.i. de les posicions parells
//       Exemple: [2 5 3 8 1] quedaria [2 3 1]
{
    node *pant = _prim;
    if (_prim->seg != NULL)
    {
        pant = _prim->seg;
        pant->ant = _prim;
    }
    node *p = pant;
    int m = _long;
    for (int i = 0; i < m / 2; i++)
    {
        if (pant->seg != NULL)
        {
            p = pant->seg;
            p->ant = pant;
        }
        pant->seg = p->seg;
        p->seg->ant = pant;
        delete p;
        pant = pant->seg;
        p = pant;
        _long--;
    }
}