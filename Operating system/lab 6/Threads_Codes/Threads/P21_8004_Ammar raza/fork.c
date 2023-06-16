# include<stdio.h>
# include<unistd.h>
# include <sys/types.h> 
# include<stdlib.h>
void main(void){
    pid_t p1 = fork() ;
    if( p1 == 0){
        pid_t p4 = fork();
        if(p4 == 0){
            pid_t p8 = fork();
            if(p8 == 0){
                printf ("child 9\n");
            }else if(p8 > 0){
                pid_t p9 = fork();
                if(p9 == 0){
                    printf ("Child 10\n");
                }else if(p9 > 0){
                    printf ("CHILD 5\n");
                }
            }
        }else if(p4 > 0){
            printf ("CHILD 2\n");
        }
    }else if(p1 > 0){
        pid_t p2 = fork();
        if(p2 == 0){
            pid_t p5 = fork();
            if(p5 == 0){
                printf("CHILD 6\n");
            }else if(p5 > 0){
                pid_t p6 = fork();
                if(p6 == 0){
                    printf("CHILD 7\n");
                }else if(p6 > 0){
                    printf("CHILD 3\n");
                }
            }
        }else if(p2 > 0){
            pid_t p3 = fork();
            if(p3 == 0){
                pid_t p7 = fork();
                if(p7 == 0){
                    pid_t p10 = fork();
                    if(p10 == 0){
                        pid_t p11 = fork();
                        if(p11 == 0){
                            printf("CHILD 12\n");
                        }else if(p11 > 0){
                            pid_t p12 = fork();
                            if(p12 == 0){
                                printf("CHILD 13\n");
                            }else if(p12 > 0){
                                pid_t p13 = fork();
                                if(p13 == 0){
                                    printf("CHILD 14\n");
                                }else if(p13 > 0){
                                    printf ("CHILD 5\n" ); }
                            }
                        }
                    }else if(p10 > 0){
                        printf ("CHILD 8\n" );}
                }else if(p7 > 0){
                    printf ("CHILD 4\n" );}
            }else if(p3 > 0){
                printf("PARENT \n" );
                }
                            }
        }
             }