#include <stdio.h>
#include <string.h>

struct PhonebookEntry {
    char firstName[50];
    char familyName[50];
    char landlineNumber[50];
    char mobileNumber[50];
};

struct Phonebook {
    struct PhonebookEntry entries[100];
    int numEntries;
};

void addEntry(struct Phonebook *phonebook, char *firstName, char *familyName, char *landlineNumber, char *mobileNumber) {
    strcpy(phonebook->entries[phonebook->numEntries].firstName, firstName);
    strcpy(phonebook->entries[phonebook->numEntries].familyName, familyName);
    strcpy(phonebook->entries[phonebook->numEntries].landlineNumber, landlineNumber);
    strcpy(phonebook->entries[phonebook->numEntries].mobileNumber, mobileNumber);
    phonebook->numEntries++;
}

void modifyEntry(struct Phonebook *phonebook, char *firstName, char *familyName, char *landlineNumber, char *mobileNumber) {
    for (int i = 0; i < phonebook->numEntries; i++) {
        if (strcmp(phonebook->entries[i].firstName, firstName) == 0 && strcmp(phonebook->entries[i].familyName, familyName) == 0) {
            strcpy(phonebook->entries[i].landlineNumber, landlineNumber);
            strcpy(phonebook->entries[i].mobileNumber, mobileNumber);
            break;
        }
    }
}

void listEntries(struct Phonebook *phonebook) {
    for (int i = 0; i < phonebook->numEntries; i++) {
        printf("Name: %s %s\n", phonebook->entries[i].firstName, phonebook->entries[i].familyName);
        printf("Landline Number: %s\n", phonebook->entries[i].landlineNumber);
        printf("Mobile Number: %s\n\n", phonebook->entries[i].mobileNumber);
    }
}

int main() {
    struct Phonebook phonebook;
    phonebook.numEntries = 0;

    addEntry(&phonebook, "hix", "thrwan", "1234567890", "0987654321");
    addEntry(&phonebook, "Jane", "bomb", "2345678901", "1987654320");

    modifyEntry(&phonebook, "Jane", "bomb", "1111111111", "2222222222");

    listEntries(&phonebook);

    return 0;
}