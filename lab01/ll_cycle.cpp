#include "ll_cycle.h"

bool ll_has_cycle(node *head) {
	  if (head == nullptr) return false;

	  node *tortoise = head;
	  node *hare = tortoise->next;
		do
		{
		if (hare->next == nullptr) return false;

	    hare = hare->next;
	    hare = hare->next;
	    tortoise = tortoise->next;

        if (hare == tortoise) return true;
		}
	    while (hare != nullptr);

	    return false;
}

