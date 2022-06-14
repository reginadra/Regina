#include "list.h"
#include <stdlib.h>
#include <stdio.h>

List l_prepend(List l, int v)
{
    List h = (List)malloc(sizeof(struct Node));
    h->value = v;
    h->next = l;
    return h;
}

List l_append(List l, int v)
{
    if(!l)
        return l_prepend(l, v);
    else
    {
        List c = l;
        while(c->next)
            c = c->next;
        c->next = l_prepend(EMPTY_LIST, v);
        return l;
    }
}

List l_remove(List l, int ind)
{
    if(!ind)
    {
        List n = l->next;
        free(l);
        return n;
    }
    else
    {
        List c = l;
        while(--ind)
            c = c->next;
        List d = c->next;
        c->next = d->next;
        free(d);
        return l;
    }
}

void l_print(List l)
{
    for(; l; l=l->next)
    {
        printf("\t%d", l->value);
    }
    puts("");
}

List l_insert_to(List l, int ind, int v)
{
	if(!ind)
        return l_prepend(l, v);
    else
	{
		List c = l;
        while(--ind)
            c = c->next;
		c->next = l_prepend(c->next,v);
		return l;
	}
}

List l_insert_keep_sorting(List l, int v)
{
	if(!l)
        return l_prepend(l, v);
    else
	{
		int ind = 0;
		List c = l;
        while(c->next)
			if(c->value > v)
				return l_insert_to(l, ind, v);
			c = c->next;
			ind++;
		return l_insert_to(l, ind+1, v);
	}
}