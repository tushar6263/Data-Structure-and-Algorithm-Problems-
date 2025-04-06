#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define TOTAL_SLOTS 13

// Structure for each appointment slot
typedef struct {
    char date[12];       // Date string, e.g., "2025-03-11"
    char timeSlot[30];   // Time slot string, e.g., "11:00 am - 11:30 am"
    char bookedBy[50];   // Name of the person who booked (empty if available)
    int isBooked;        // 0 = available, 1 = booked
} Appointment;

// Global array with 13 time slots
Appointment slots[TOTAL_SLOTS];

// Function to get the current date dynamically
void getCurrentDate(char *dateBuffer) {
    time_t t;
    struct tm *tm_info;
    time(&t);
    tm_info = localtime(&t);
    strftime(dateBuffer, 12, "%Y-%m-%d", tm_info);
}

// Initialize appointment slots dynamically with today's date
void initializeSlots() {
    char currentDate[12];
    getCurrentDate(currentDate);

    const char *timeSlots[TOTAL_SLOTS] = {
        "10:00 am - 10:30 am", "11:00 am - 11:30 am", "12:00 pm - 12:30 pm",
        "12:30 pm - 1:00 pm", "1:00 pm - 1:30 pm", "2:00 pm - 2:30 pm",
        "2:30 pm - 3:00 pm", "3:00 pm - 3:30 pm", "3:30 pm - 4:00 pm",
        "4:00 pm - 4:30 pm", "4:30 pm - 5:00 pm", "5:00 pm - 5:30 pm",
        "5:30 pm - 6:00 pm"
    };

    for (int i = 0; i < TOTAL_SLOTS; i++) {
        strcpy(slots[i].date, currentDate);
        strcpy(slots[i].timeSlot, timeSlots[i]);
        strcpy(slots[i].bookedBy, ""); 
        slots[i].isBooked = 0;
    }
}

// Load appointments from file
void loadAppointments() {
    FILE *fp = fopen("appointments.dat", "rb");
    if (fp != NULL) {
        fread(slots, sizeof(Appointment), TOTAL_SLOTS, fp);
        fclose(fp);
    }
}

// Save appointments to file
void saveAppointments() {
    FILE *fp = fopen("appointments.dat", "wb");
    if (fp != NULL) {
        fwrite(slots, sizeof(Appointment), TOTAL_SLOTS, fp);
        fclose(fp);
    }
}

// Show all booked appointments
void viewAllAppointments() {
    printf("\nBooked Appointments:\n");
    int bookedCount = 0;
    for (int i = 0; i < TOTAL_SLOTS; i++) {
        if (slots[i].isBooked) {
            bookedCount++;
            printf("%d. %s %s (Booked by: %s)\n", bookedCount, slots[i].date, slots[i].timeSlot, slots[i].bookedBy);
        }
    }
    if (bookedCount == 0) {
        printf("No appointments booked yet.\n");
    }
}

// Show available and booked slots
void viewAvailableAndBookedSlots() {
    printf("\nAvailable Slots:\n");
    for (int i = 0; i < TOTAL_SLOTS; i++) {
        if (!slots[i].isBooked) {
            printf("%d. %s %s\n", i + 1, slots[i].date, slots[i].timeSlot);
        }
    }

    printf("\nBooked Slots:\n");
    viewAllAppointments();
}

// Cancel an appointment
void cancelAppointment() {
    int choice;
    printf("\nBooked Appointments:\n");
    viewAllAppointments();

    printf("\nEnter the appointment number to cancel: ");
    scanf("%d", &choice);

    int bookedCount = 0;
    int mapping[TOTAL_SLOTS];

    for (int i = 0; i < TOTAL_SLOTS; i++) {
        if (slots[i].isBooked) {
            bookedCount++;
            mapping[bookedCount - 1] = i;
        }
    }

    if (choice < 1 || choice > bookedCount) {
        printf("Invalid selection.\n");
        return;
    }

    int slotIndex = mapping[choice - 1];

    char confirm[10];
    printf("\nAre you sure you want to cancel this appointment? (yes/no): ");
    scanf("%s", confirm);

    if (strcmp(confirm, "yes") == 0) {
        printf("\nAppointment canceled successfully: %s %s (Booked by: %s)\n",
               slots[slotIndex].date, slots[slotIndex].timeSlot, slots[slotIndex].bookedBy);
        slots[slotIndex].isBooked = 0;
        strcpy(slots[slotIndex].bookedBy, "");
        saveAppointments();
    } else {
        printf("\nCancellation aborted.\n");
    }
}

// Book an appointment
void bookAppointment() {
    char name[50];
    int choice;

    printf("\nEnter your name: ");
    scanf("%s", name);

    printf("\nAvailable Slots:\n");
    for (int i = 0; i < TOTAL_SLOTS; i++) {
        if (!slots[i].isBooked) {
            printf("%d. %s %s\n", i + 1, slots[i].date, slots[i].timeSlot);
        }
    }

    printf("\nEnter the index of the desired slot: ");
    scanf("%d", &choice);

    if (choice < 1 || choice > TOTAL_SLOTS || slots[choice - 1].isBooked) {
        printf("Invalid selection or slot already booked!\n");
        return;
    }

    slots[choice - 1].isBooked = 1;
    strcpy(slots[choice - 1].bookedBy, name);
    saveAppointments();

    printf("\nYour appointment is booked successfully at %s %s\n", slots[choice - 1].date, slots[choice - 1].timeSlot);

    viewAllAppointments();

    int selectedIndex;
    printf("\nEnter the index of the desired slot to view details: ");
    scanf("%d", &selectedIndex);

    int bookedCount = 0;
    int mapping[TOTAL_SLOTS];
    for (int i = 0; i < TOTAL_SLOTS; i++) {
        if (slots[i].isBooked) {
            bookedCount++;
            mapping[bookedCount - 1] = i;
        }
    }

    if (selectedIndex >= 1 && selectedIndex <= bookedCount) {
        int slotIndex = mapping[selectedIndex - 1];
        printf("\nAppointment Details:\n");
        printf("Name: %s\n", slots[slotIndex].bookedBy);
        printf("Date: %s\n", slots[slotIndex].date);
        printf("Time: %s\n", slots[slotIndex].timeSlot);
    } else {
        printf("Invalid selection.\n");
    }
}

// Admin menu
void adminMenu() {
    int choice;
    while (1) {
        printf("\nAdmin Menu:\n");
        printf("1. View all appointments\n");
        printf("2. Cancel an appointment\n");
        printf("3. Available and booked slots\n");
        printf("4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                viewAllAppointments();
                break;
            case 2:
                cancelAppointment();
                break;
            case 3:
                viewAvailableAndBookedSlots();
                break;
            case 4:
                printf("\nExiting...\n");
                return;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}

// User menu
void userMenu() {
    int choice;
    while (1) {
        printf("\nUser Menu:\n");
        printf("1. Add a new appointment\n");
        printf("2. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                bookAppointment();
                break;
            case 2:
                printf("\nExiting...\n");
                return;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}

// Main function
int main() {
    char role[10];

    initializeSlots();
    loadAppointments();

    printf("Welcome to the Appointment Scheduler!\n");
    printf("Are you an admin? (yes/no): ");
    scanf("%s", role);

    if (strcmp(role, "yes") == 0) {
        adminMenu();
    } else {
        userMenu();
    }

    return 0;
}