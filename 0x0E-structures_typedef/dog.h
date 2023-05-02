#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * 
 * Description: Provides the struct of the dog
 */

struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * _strcpy - Copies the string pointed to by src, including the terminating
 *           null byte.
 * @dest: the dest buffer.
 * @src: the src string
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src);

/**
 * _strlen - Calculates the length of the string
 * @s: the input string
 *
 * Return: the length of the string
 */
int _strlen(char *s);

/**
 * init_dog - Initializes a dog struct with the parameters
 * @d: the dog struct to initialize
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - Prints the details of the dog
 * @d: The dog to print 
 */
void print_dog(struct dog *d);

/**
 * new_dog - Creates a new dog with the provided parameters
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog_t
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - Frees the memory allocated to the dog
 * @d: pointer to dog_t to free
 */
void free_dog(dog_t *d);

#endif
