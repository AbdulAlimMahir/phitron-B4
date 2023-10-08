#include <stdio.h>
int main(){
    int mark, path;

    printf("Your marks? : ");
//  taking MARKS
    do{
        scanf("%d",&mark);
        if (mark>100){
            printf("Above 100%% marks isn't possible.\n");
            printf("Please state your correct marks.\n:");
        }
        else{continue;}
    }
    while(mark>100);
    printf("You got %d\n",mark);
//  checking MARKS
    if(mark<=100 && mark>=80){
        printf("You may choose:\n[1] Problem Solving Track OR\n[2] Software Development Track.\nPath you choose is: ");

    //  checking TRACKS
        do{
            scanf("%d", &path);
            if (path!=1 && path!=2){
                printf("You have chosen wrong choice.\n");
                printf("Please choose:\n\t[1] for Problem Solving Track OR\n\t[2] for Software Development Track.\n=> ");
            }
            else{break;}
        }
        while(path!=1 || path!=2);
        
        if(path == 1){
            printf("You have chosen Problem Solving Track.\n");
        }
        else{
            printf("You have chosen Software Development Track.\n");
        }
    }
//  rechecking MARKS
    else if(mark<80 && mark>=50){
        printf("Sorry, your mark isn't enought to proceed further.\n");
        printf("You were given one last chance. Please try harder this time.\n");
    }
    else if(mark<50){
        printf("You're not trying your best and you failed the exam.\n");
        printf("You were given one last chance. Please try harder this time.\n");
    }

//  PROBLEM SOLVING TRACK
    if (path==1){
        char compete;
        printf("To join this program, you need to pass a competative exam.\n");
        printf("Are you ready to compete?\n");
        printf("[Y] Yes\t[n] No\n=> ");
        scanf("%s", &compete);

    //  competition
        if (compete=='Y'){
            char qualify;
            printf("You joined the competition and completed the program.\n");
            printf("Did you qualify for the club?\n");
            printf("[Y] Yes\t[n] No\n=> ");
            scanf("%s", &qualify);
            if (qualify=='Y'){
                printf("Congratulations! You have joined the club.\n");
                printf("\"Here we solve the world's problems one at a time.\" --Presh Talwalker\n");
                printf("*****************************************\n");
                printf("*\t  A few moments later\t\t*\n");
                printf("*****************************************\n");
                printf("Now that you've completed your journey as a Problem Solver,do you want to stay that way? Or Wanna Try getting a job?\n");

               // PST next goal
                char carrier;
                printf("[1] Solve more problems (maybe create some)\n[2] Get a job\n=> ");
                scanf("%s", &carrier);
                if (carrier=='Y'){
                    printf("You've chosen to create some problems. (Cringe).\n");
                }
                else{
                    printf("You've chosen to get a job.\n");
                    printf("Now, let's try to some knowledge about software. It'll help in job sector.\n");
                    printf(">>> You got access to the Software Development Track.\n");
                }
            }
            else{
                printf("Sorry to see you go.\n");
                printf("Don't worry, you're still qualified for Software Development Track. Let's start there.\n");
                printf(">>> You got access to the Software Development Track.\n");
            }
        }
    }
    return 0;
}