/**
 * struct dlistint_t - doubly linked list
 * @n: integer
 * @prev: points to the privous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structue
 *
 */
size_t print_dlistint(const dlistint_t *h);
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;
