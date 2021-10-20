#include "llista.hpp"
#include <iostream>

void Llista::duplica()
// Pre: True
// Post: S'han duplicat els elements del p.i.
//       Exemple: [2 5 3] = > [2 2 5 5 3 3]
{
    int m = _long;
    if (m > 0)
    {
        node *pant = _prim;
        for (int i = 0; i < m; i++)
        {
            node *cp = new node;
            cp->info = pant->info;
            if (pant->seg != NULL)
            {
                cp->seg = pant->seg;
                pant->seg = cp;
                pant = cp;
            }
            else
            {
                cp->seg = NULL;
                pant->seg = cp;
                pant = cp;
            }
            pant = pant->seg;
            _long++;
        }
    }
}