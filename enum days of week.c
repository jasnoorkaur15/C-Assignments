#include <stdio.h>
// Define an enumeration for days of the week
enum Days {
    MONDAY,    // Default value: 0
    TUESDAY,   // 1
    WEDNESDAY, // 2
    THURSDAY,  // 3
    FRIDAY,    // 4
    SATURDAY,  // 5
    SUNDAY     // 6
};

int main() {
    enum Days today; // Declare a variable of type enum Days
    int input;

    // Display a menu for the user
    printf("Select a day of the week (0 for Monday, 1 for Tuesday, ... 6 for Sunday): ");
    scanf("%d", &input);

    // Validate user input
    if (input < 0 || input > 6) {
        printf("Invalid day. Please enter a number between 0 and 6.\n");
        return 1;
    }

    today = (enum Days)input; // Assign user input to enum variable

    // Display activities for the selected day
    switch (today) {
        case MONDAY:
            printf("Monday: Start the week with a workout!\n");
            break;
        case TUESDAY:
            printf("Tuesday: Attend team meetings.\n");
            break;
        case WEDNESDAY:
            printf("Wednesday: Work on your project.\n");
            break;
        case THURSDAY:
            printf("Thursday: Study for exams.\n");
            break;
        case FRIDAY:
            printf("Friday: Finish all pending tasks.\n");
            break;
        case SATURDAY:
            printf("Saturday: Spend time with family.\n");
            break;
        case SUNDAY:
            printf("Sunday: Relax and prepare for the week ahead.\n");
            break;
        default:
            printf("Invalid day selected.\n");
    }

    return 0;
}

