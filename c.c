//1
#include <stdio.h>

int main() {
    int num;

    
    printf("Enter an integer: ");
    scanf("%d", &num);

   
    if (num > 0) {
        printf("%d is Positive.\n", num);
    } else if (num < 0) {
        printf("%d is Negative.\n", num);
    } else {
        printf("The number is Zero.\n");
    }

    return 0;
}


//2
#include <stdio.h>

int main() {
    int a, b;

   
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Before swap: a = %d, b = %d\n", a, b);

    
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}


int main() {
    int arr[] = {20, 32, 6, 22, 47, 21};
    int n = 6;
    int i, largest, smallest;

    
    largest = smallest = arr[0];

    
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    return 0;
}

//4
#include <stdio.h>
#include <string.h>

int main() {
    char str[5];

    
    printf("Enter a string: ");
    scanf("%s", str);   

    int rev = strlen(str);

    printf("Reversed string: ");
    for (int i = rev - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}

//5

#include <stdio.h>


int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;   
    } else {
        return n * factorial(n - 1);  
};
}

int main() {
    int n;

  
    printf("Enter a positive integer: ");
    scanf("%d", &n);

  
        printf("Factorial of %d = %d\n", n, factorial(n));


    return 0;
}
