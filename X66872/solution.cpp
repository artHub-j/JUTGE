#include "llista.hpp"
#include <iostream>

void Llista::separa(Llista &l2)
// Pre: l2 és buida
// Post: S'han separat els elements del p.i., quedant al p.i. els elements
//       de les posicions senars i a l2 els de les posicions parells.
//       Exemple: [2 5 3 8 1] => [2 3 1] i l2 = [5 8]
{
    cout << l2._long << endl;
    if (_long > 0)
    {
        node *act = _prim;
        for (int i = 1; i < _long + 1; i++)
        {
            if (act->seg != NULL)
            {
                if (act->seg->seg != NULL)
                    act->seg = act->seg->seg;
                else
                {
                    act->seg = NULL;
                }
                if (act->seg != NULL)
                    act = act->seg;
            }
        }
    }
}