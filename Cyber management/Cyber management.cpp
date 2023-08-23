#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure to represent a cyber cafe user
typedef struct {
    char username[20];
    char password[20];
    int hours;
} User;

// Function to display the menu options
void displayMenu() {
    printf("\n--- Cyber Management System ---\n");
    printf("1. Register User\n");
    printf("2. Login\n");
    printf("3. Logout\n");
    printf("4. View User Details\n");
    printf("5. Exit\n");
    printf("--------------------------------\n");
}

// Function to register a new user
void registerUser(User* users, int* numUsers) {
    if (*numUsers >= 10) {
        printf("Maximum number of users reached!\n");
        return;
    }
    
    User newUser;
    printf("\n--- Register User ---\n");
    printf("Enter username: ");
    scanf("%s", newUser.username);
    
    printf("Enter password: ");
    scanf("%s", newUser.password);
    
    newUser.hours = 0;
    
    users[*numUsers] = newUser;
    (*numUsers)++;
    
    printf("User registered successfully!\n");
}

// Function to find a user by their username
int findUserByUsername(User* users, int numUsers, const char* username) {
    for (int i = 0; i < numUsers; i++) {
        if (strcmp(users[i].username, username) == 0) {
            return i;
        }
    }
    return -1;
}

// Function to log in a user
void login(User* users, int numUsers) {
    char username[20];
    char password[20];
    
    printf("\n--- Login ---\n");
    printf("Enter username: ");
    scanf("%s", username);
    
    printf("Enter password: ");
    scanf("%s", password);
    
    int userIndex = findUserByUsername(users, numUsers, username);
    
    if (userIndex == -1 || strcmp(users[userIndex].password, password) != 0) {
        printf("Invalid username or password!\n");
    } else {
        printf("Login successful!\n");
        // Perform additional operations for a logged-in user
        // (e.g., time tracking, access control, etc.)
    }
}

// Function to logout a user
void logout() {
    printf("\n--- Logout ---\n");
    printf("User logged out successfully!\n");
    // Perform any necessary cleanup or tasks related to logging out
}

// Function to view user details
void viewUserDetails(User* users, int numUsers) {
    printf("\n--- User Details ---\n");
    for (int i = 0; i < numUsers; i++) {
        printf("Username: %s\n", users[i].username);
        printf("Hours Used: %d\n", users[i].hours);
        printf("--------------------\n");
    }
}

int main() {
    User users[10];
    int numUsers = 0;
    int choice;
    
    do {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                registerUser(users, &numUsers);
                break;
                
            case 2:
                login(users, numUsers);
                break;
                
            case 3:
                logout();
                break;
            case 4:
                viewUserDetails(users, numUsers);
                break;
                
            case 5:
                printf("Exiting the program...\n");
                break;
                
            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }
    } while (choice != 5);
    
    return 0;
}
