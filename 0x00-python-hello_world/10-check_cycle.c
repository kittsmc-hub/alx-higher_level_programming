/**Write a function in C that checks if a singly linked list has a cycle in it.:
  * check_cycle - checks if a linked list contains a cycle
  * @list: linked list to check
  *
  * Return: 1 if the list has a cycle, 0 if it doesn't
  */
int check_cycle(listint_t *list)
{
	listint_t *tempNode1 = list;
	listint_t *tempNode2 = list;

	if (tempNode2==null)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}

	return (0);
}
