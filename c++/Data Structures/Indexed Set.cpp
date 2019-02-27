Estructura de datos basada en políticas. Funciona como un set<> pero es indexado como un array[] y cuenta con dos métodos adicionales.
.find_by_order(k) -> Retorna un iterador al k-ésimo elemento, si k >= size() retona .end()
.order_of_key(x) -> Retorna cuantos elementos hay menores (<) que x

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag,
	tree_order_statistics_node_update> indexed_set;