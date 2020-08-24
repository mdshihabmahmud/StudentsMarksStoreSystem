struct student {
    char FirstName[50];
    int roll;
    float Marks;
} s[10];

int main() {
    int i;
    printf("Enter information of students:\n");

    // storing informationi
    for (i = 0; i <5; ++i)
        {
        s[i].roll = i + 1;
        printf("\nFor roll number %d,\n", s[i].roll);
        printf("Enter full name: ");
        scanf("%s", s[i].FirstName);
        printf("Enter Marks: ");
        scanf("%f", &s[i].Marks);
    }
    printf("\n\n*****Displaying Information*****\n\n");

    // displaying information
    for (i = 0; i <5; ++i)
        {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].FirstName);
        printf("Marks: %.1f", s[i].Marks);
        printf("\n");
    }
    return 0;
}
