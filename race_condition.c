#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
	

/*
	A race condition occurs when two threads access a shared variable at the same time. The first thread reads the variable, and the second thread reads the same value from the variable.
*/
int mail = 0;
int i = 0;
pthread_mutex_t lock;

void *func()
{
	while(i < 100000)
	{	
		pthread_mutex_lock(&lock); // to avoid race condition we add locks to code
		mail++;
		i++;
		pthread_mutex_unlock(&lock);
	}
	return 0;
}

int main ()
{
	pthread_t thread, thread2;

	if (pthread_create(&thread, NULL, &func, NULL ) != 0)
	{
		return 1;
	}
	if (pthread_create(&thread2, NULL, &func, NULL ) != 0)
	{
		return 2;
	}
	if (pthread_join(thread, NULL) != 0)
	{
		return 3;
	}
	if (pthread_join(thread2, NULL) != 0)
	{
		return 4;
	}
	printf("number of mails: %d\n", mail);
	return 0;
}