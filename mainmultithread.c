#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

int main () {
    pthread_t thread1, thread2; // 2. Declare thread IDs
    char* msg1 = "Hello from Thread 1!";
    char* msg2 = "Hello from Thread 2!";
//3. Create the threads
// Arguments: (&thread_id, attributes, function_to_run, argument_to_pass)
pthread_create(&thread1, NULL, print_message, (void*) msg1);
pthread_create(&thread2, NULL, print_message, (void*) msg2);

// 4. Wait for the threads to finish before exiting main()
pthread_join(thread1, NULL);
pthread_join(thread2, NULL);
printf("Both threads have finished executing. Main process exiting.\n");
    return 0;
}
