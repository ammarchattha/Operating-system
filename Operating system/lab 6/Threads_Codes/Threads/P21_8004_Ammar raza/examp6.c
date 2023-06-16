#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
void *light(void *threadid)
{
    printf("\n%d: ~ LIGHTS");
    pthread_exit(NULL);
}
void *thermostat(void *threadid)
{
    printf("\n%d: ~Thermostat");
    pthread_exit(NULL);
}
void *Security(void *threadid)
{
    printf("\n%d:~ Security System");
    pthread_exit(NULL);
}
void *App(void *threadid)
{
    printf("\n%d:Appliances" );
    pthread_exit(NULL);
}
void *Scamera(void *threadid)
{
    printf("\n%d: Security cameras");
    pthread_exit(NULL);
}
int main()
{
    pthread_t threads;

    int rc; int t;
     printf("...............Initializing Embedded Operating System............%d\n", t);
     printf("Starting home device application ---&d\n");

            printf("ERROR; return code from pthread_create() is %d\n", rc);
            exit(-1);
        }
        pthread_join(threads[t], NULL );
    }
    printf("Exiting main\n");
    pthread_exit(NULL);
}
