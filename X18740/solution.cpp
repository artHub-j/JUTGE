#include "llista.hpp"

void Llista::duplica()
// Pre: True
// Post: S'han duplicat els elements del p.i.
//       Exemple: [2 5 3] = > [2 2 5 5 3 3]
{
    int m = _long;
    node *p = _prim;
    if (_prim->seg != NULL)
        p = p->seg;

    for (int i = 0; i < m; i++)
    {
        node *cp = new node;
        cp->info = p->info;

        if (p->seg != NULL)
        {
            cp->seg = p->seg;
            p->seg = cp;
            p = cp;
        }
        else
        {
            cp->seg = NULL;
            p->seg = cp;
            p = cp;
        }
        p = p->seg;
        _long++;
    }
}