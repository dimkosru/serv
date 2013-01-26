struct Node {
	int sock;
	struct Node * next;
};

struct Queue {
	struct Node * head;
	struct Node * tail;
        int count;
};

struct Queue *new_queue(void);
int push(struct Queue* q, int sock);
struct Node *pop(struct Queue* q);
