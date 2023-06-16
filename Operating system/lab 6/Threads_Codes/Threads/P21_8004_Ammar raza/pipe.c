#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/types.h>
#include <unistd.h>


int main (){
    int process1 =fork();
    if (process1==0){
        int fd(2);
        pipe(fd);
        char buf(1024);
        char i1(1024);
        char i2(1024);
        char i3(1024);

        printf("Enter the first image name : ");
        fflush(stdin);
        fgets(i1,1024,stdin);

        printf("Enter the second image name : ");
        fflush(stdin);
        fgets(i2,1024,stdin);

          printf("Enter the third image name : ");
        fflush(stdin);
        fgets(i3,1024,stdin);

        int f1= mkfifo("pipe1",0777);
        int f2= mkfifo("pipe2",0777);
        int f3= mkfifo("pipe3",0777);

        if (f1<0){
            printf("p1 is not created\n");
        }
        else
         printf("p1 is created");
         if (f2<0){
            printf("p2 is not created\n");
        }
        else
         printf("p2 is created");
         if (f3<0){
            printf("p3 is not created\n");
        }
        else
         printf("p3 is created");

         sleep(3);


         int fifo_w1 = open ("p1",O_WRONLY);
         if (fifo_w1 <0){
            printf("Error opening pipe 1");
         }  
         else
              
         int fifo_w2 = open ("p2",O_WRONLY);
         if (fifo_w2<0){
            printf("Error opening pipe 2");
         } 
         else
           printf(openned);       
        

    }
}