#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void *example_func()
{
	printf("this is a test lol\n");
	return 0;
}

void *example_func2()
{
	printf("this is test two lol\n");
	return 0;
}

int main() 
{
	pthread_t thread; // a place where the thread API will store the information
	pthread_t thread2; // a place where the thread API will store the information

	if (pthread_create(&thread, NULL, &example_func, NULL) != 0) // where we initialize threads
	{
		return 1;
	}
	if (pthread_create(&thread2, NULL, &example_func2, NULL) != 0)
	{
		return 2;
	}
	pthread_join(thread, NULL); // pthread_join works similar to wait function
	pthread_join(thread2, NULL);
	return 0;
}
