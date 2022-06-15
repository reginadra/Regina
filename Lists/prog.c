#include "list.h"

int main()
{
    List l = EMPTY_LIST;

    l = l_prepend(l, 5);
    l = l_prepend(l, 4);
    l = l_prepend(l, 3);
    l = l_prepend(l, 2);
    l = l_prepend(l, 1);
    l = l_append(l, 6);
    l = l_append(l, 7);
    l_print(l);

    l = l_remove(l, 0);
    l_print(l);

    l = l_remove(l, 2);
    l_print(l);
    
    l = l_insert_to(l, 2, 4);
    l_print(l);
	l = l_insert_to(l, 6, 15);
	l_print(l);
	
	l = l_insert_keep_sorting(l, 8);
	l_print(l);
	
	l = l_insert_keep_sorting(l, 18);
	l_print(l);
	
	l = l_remove(l, 3);
    l_print(l);
    
    l = l_insert_keep_sorting(l, 5);
	l_print(l);
    
    // deallocate list elements one by one
    while(l)
        l = l_remove(l, 0);

    return 0;
}