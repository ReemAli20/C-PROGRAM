#include <stdio.h>

int main() {
    char language;
    int numBooks;
    int choice;
    float totalPrice = 0;

    // اختيار اللغة
    printf("Choose Language (E for English, A for Arabic): ");
    scanf(" %c", &language);

    if (language != 'E' && language != 'A') {
        printf("Invalid language choice. Exiting program.\n");
        return 1;
    }

    // إدخال عدد الكتب
    printf("Enter the number of books you want to buy: ");
    scanf("%d", &numBooks);

    // تكرار اختيار الكتب
    for (int i = 0; i < numBooks; i++) {
        if (language == 'E') {
            // قائمة الكتب الإنجليزية
            printf("1. Rich Dad Poor Dad - $100\n");
            printf("2. Atomic Habits - $150\n");
            printf("3. Sharpen the Saw - $200\n");
            printf("4. The Power of Your Subconscious Mind - $120\n");
            printf("5. Burn After Writing - $180\n");
        } else if (language == 'A') {
            // قائمة الكتب العربية
            printf("1. الأب الغني والأب الفقير - 90\n");
            printf("2. العادات الذرية - 110\n");
            printf("3. اشحذ المنشار - 150\n");
            printf("4. قوة العقل الباطن - 120\n");
            printf("5. احرق بعد الكتابة - 130\n");
        }

        // اختيار الكتاب
        printf("Enter the number of the book you want: ");
        scanf("%d", &choice);

        // حساب السعر بناءً على الاختيار
        if (language == 'E') {
            if (choice == 1) totalPrice += 100;
            else if (choice == 2) totalPrice += 150;
            else if (choice == 3) totalPrice += 200;
            else if (choice == 4) totalPrice += 120;
            else if (choice == 5) totalPrice += 180;
            else printf("Invalid choice, skipping this book.\n");
        } else if (language == 'A') {
            if (choice == 1) totalPrice += 90;
            else if (choice == 2) totalPrice += 110;
            else if (choice == 3) totalPrice += 150;
            else if (choice == 4) totalPrice += 120;
            else if (choice == 5) totalPrice += 130;
            else printf("اختيار غير صحيح، سيتم تخطي هذا الكتاب.\n");
        }
    }

    // عرض إجمالي السعر
    if (language == 'E') {
        printf("Total Price: %.2f\n", totalPrice);
    } else {
        printf("إجمالي السعر: %.2f\n", totalPrice);
    }

    return 0;
}