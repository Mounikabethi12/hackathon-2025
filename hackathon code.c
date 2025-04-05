#include <stdio.h>

void suggestCareer(int interest, int strength) {
    if (interest == 1 && strength == 1) {
        printf("\nSuggested Career: Software Engineer, Data Scientist, AI Specialist\n");
    } else if (interest == 2 && strength == 2) {
        printf("\nSuggested Career: Doctor, Nurse, Medical Researcher\n");
    } else if (interest == 3 && strength == 3) {
        printf("\nSuggested Career: Entrepreneur, Business Analyst, Marketing Manager\n");
    } else if (interest == 4 && strength == 4) {
        printf("\nSuggested Career: Teacher, Professor, Educational Consultant\n");
    } else {
        printf("\nNo direct match found.\nConsider exploring more career options based on your interests and strengths.\n");
    }
}

int main() {
    int interest, strength;

    printf("Welcome to the Career Guidance System!\n");
    printf("--------------------------------------\n");


    printf("\nSelect your area of interest:\n");
    printf("1. Technology\n");
    printf("2. Medicine\n");
    printf("3. Business\n");
    printf("4. Education\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &interest);

   
    printf("\nSelect your personal strength:\n");
    printf("1. Problem-Solving\n");
    printf("2. Empathy\n");
    printf("3. Leadership\n");
    printf("4. Communication\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &strength);


    suggestCareer(interest, strength);

  
    printf("\nPress Enter to exit...");
    getchar(); 
    getchar();

    return 0;
}
