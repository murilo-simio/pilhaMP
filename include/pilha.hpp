typedef struct pilha{
	int *elem;
	int size;
	int i;
}Pilha;

void push(Pilha *p, int val);
void pop(Pilha *p);
int top(Pilha *p);
int size(Pilha *p);
void setSize(Pilha *p, int val);
bool isFull(Pilha *p);
bool isEmpty(Pilha *p);
void createStack(Pilha *p, int val);
void printStack(Pilha *p);
void destroyStock(Pilha *p);
