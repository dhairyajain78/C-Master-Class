#include <stdio.h>

int main() {
    int username, password;
    
        printf("Enter username (numeric ID): ");
    scanf("%d", &username);
       if (username == 123) {
        printf("Enter password (numeric PIN): ");
        scanf("%d", &password);
        
      
        if (password == 4567) {
            printf("Login successful!\n");
        } else {
            printf("Incorrect password. Access denied.\n");
        }
    } else {
        printf("Incorrect username. Access denied.\n");
    }
    
    return 0;
}
