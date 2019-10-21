

struct Animal
{
	char type[64]; 
	char name[64]; 
	int age;  
	int danger;  
	struct Animal *next; 
};

typedef struct Animal TAnimal;


TAnimal* create();
void     addTail(TAnimal *head);
void     printList(TAnimal *head);
int      searchAnimal(TAnimal *head, char* type);
