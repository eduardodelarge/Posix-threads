#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

/*
		Process	Thread
1.	Process means any program is in execution.	Thread means a segment of a process.
2.	The process takes more time to terminate.	The thread takes less time to terminate.
3.	It takes more time for creation.	It takes less time for creation.
4.	It also takes more time for context switching.	It takes less time for context switching.
5.	The process is less efficient in terms of communication.	Thread is more efficient in terms of communication.
6. 	Multiprogramming holds the concepts of multi-process.	We don’t need multi programs in action for multiple threads because a single process consists of multiple threads.
7.	The process is isolated.	Threads share memory.
8.	The process is called the heavyweight process.	A Thread is lightweight as each thread in a process shares code, data, and resources.
9.	Process switching uses an interface in an operating system.	Thread switching does not require calling an operating system and causes an interrupt to the kernel.
10.	If one process is blocked then it will not affect the execution of other processes 	If a user-level thread is blocked, then all other user-level threads are blocked. 
11.	The process has its own Process Control Block, Stack, and Address Space.	Thread has Parents’ PCB, its own Thread Control Block, and Stack and common Address space.
12.	Changes to the parent process do not affect child processes.	Since all threads of the same process share address space and other resources so any changes to the main thread may affect the behavior of the other threads of the process.
13.	A system call is involved in it.	No system call is involved, it is created using APIs.
14.	The process does not share data with each other.

*/

int x = 2;

void *func()
{
	x += 5;
	sleep(1);
	printf("Value of x is : %d\n", x);
	return 0;
}

void *func2()
{
	sleep(1);
	printf("Value of x is : %d\n", x);
	return 0;
}

int main()
{
	pthread_t thread;

	if (pthread_create(&thread, NULL, &func, NULL) != 0)
	{
		return 1;
	}
	if (pthread_create(&thread, NULL, func2, NULL) != 0)
	{
		return 2;
	}
	pthread_join(thread, NULL);
	pthread_join(thread, NULL);
	return 0;
}