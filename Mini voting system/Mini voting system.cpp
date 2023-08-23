#include<stdio.h>
void displayMenu()
{
    printf("\n-- Voting System Menu --\n");
    printf("\n1. Cast Vote\n");
    printf("2. Display Results\n");
    printf("3. Exit\n");
    printf("------------------------\n");
}
int main()
{
    int candidate1Votes = 0;
    int candidate2votes = 0;
    int candidate3votes = 0;
    int totalVotes = 0;
    int choice;
    
    do{
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d",&choice);
        
        switch(choice){
            case 1:
                printf("\n-- Cast Vote --\n");
                printf("1. candidate 1\n");
                printf("2. candidate 2\n");
                printf("3. candidate 3\n");
                printf("---------------------\n");
                int candidateNumber;
                scanf("%d", &candidateNumber);
                
                switch(candidateNumber){
                    case 1:
                        candidate1Votes++;
                        break;
                    case 2:
                        candidate2votes++;
                        break;
                    case 3:
                        candidate3votes++;
                        break;
                    default:
                        printf("Invalid candidate number!\n");
                        break;
                        
                }
                
                totalVotes++;
                printf("Vote cast successfully!\n");
                break;
            case 2:
                printf("\n--- Voting Results ---\n");
                printf("candidate 1: %d votes\n",candidate1Votes);
                printf("candidate 2: %d votes\n",candidate2votes);
                printf("candidate 3: %d votes\n",candidate3votes);
                printf("Total votes: %d\n",totalVotes);
                printf("-----------------------\n");
                break;
            case 3:
                printf("Exiting the program...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }
    } while(choice !=3);
    return 0;
    
}
