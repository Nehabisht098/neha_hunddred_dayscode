//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>

int main() {
    char date[20], formatted[20];
    char day[3], month[3], year[5];

    // Input date in dd/mm/yyyy format
    printf("Enter date (dd/04/yyyy): ");
    fgets(date, sizeof(date), stdin);

    // Extract day, month, year
    strncpy(day, date, 2);
    day[2] = '\0';

    strncpy(month, date + 3, 2);
    month[2] = '\0';

    strncpy(year, date + 6, 4);
    year[4] = '\0';

    // Convert month number to abbreviation
    if (strcmp(month, "04") == 0) {
        sprintf(formatted, "%s-Apr-%s", day, year);
    } else {
        printf("This program only handles month '04'.\n");
        return 0;
    }

    // Display formatted date
    printf("Formatted date: %s\n", formatted);

    return 0;
}
