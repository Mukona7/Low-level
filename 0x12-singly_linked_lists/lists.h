#ifndef LISTS_H
#define LISTS_H
/**
 *struck lists_s - singly linked list
 *@str: string - (malloc'ed string)
 *@len: length of the string
 *@next: points to the next node
 *
 *description Sinlge linked list
 */



 typedef struct lists_s
 {
	 char *str
	 unsigned int len;
	 struct list_s *next;
 }lists_t;


size_t print_list(const list_t *h);
int _putchar(char c)
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
