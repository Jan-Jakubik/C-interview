/* TEST 1 ----------------------------------------------------------------*/
#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;

    printf("Value of x: %d\n", *p);
    printf("Address of x: %p\n", /* ??? */);  // Fill in missing part

    return 0;
}

/* TEST 2 ----------------------------------------------------------------*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[6] = "Hello";
    strcat(str, "World"); // What's wrong here?

    printf("%s\n", str);
    return 0;
}

/* TEST 3 ----------------------------------------------------------------*/
// What is missing in the snippet
// How to fix the memory leak in this code?
#include <stdio.h>
#include <stdlib.h>

void memory_leak_function() {
    const int n = 5;
    int *arr = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        arr[i] = i * i;
    }

}

/* TEST 4 ----------------------------------------------------------------*/
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40};
    int *p = arr;

    printf("%d\n", *(p + 2));   // Output?
    printf("%d\n", *++p);       // Output?
}

/* TEST 5 ----------------------------------------------------------------*/
// How the declaration, definition and usage of the move_point should looks like?
// Fix the code snippet to make it compile and run correctly
// Add "const" and "static" keywords to the function declaration and definition as needed
#include <stdio.h>

/* ??? */ move_point(/* ??? */)

struct Point {
    int x, y;
};

/* ??? */ move_point(/* ??? */) {
    p->x += 10;
    p->y += 5;
}

int main() {
    struct Point p1 = {2, 3};
    move_point(/* ??? */);
    printf("(%d, %d)\n", p1.x, p1.y);
    return 0;
}


/* TEST 6 ----------------------------------------------------------------*/
// How to improve this to handle the operation as safe as possible.
// You can google functions documentation
#include <stdio.h>

void main() {
    FILE *fp = fopen("data.txt", "r");
    char buffer[100];
    
    while (fgets(buffer, sizeof(buffer), fp)) {
        printf("%s", buffer);
    }
    
    // What's missing at this line? 
    // And on this line? 
}

/* TEST 7 ----------------------------------------------------------------*/
// Find and identify the race condition
// Fix the code snippet to make it compile and run correctly
// You can google functions documentation or use AI to find the solution

#include <stdio.h>
#include <pthread.h>

int counter = 0;

void* increment(void *arg) {
    for (int i = 0; i < 100000; i++)
    counter++;
    return NULL;
}

int main() {
    pthread_t t1, t2;
    pthread_create(&t1, NULL, increment, NULL);
    pthread_create(&t2, NULL, increment, NULL);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    printf("Counter = %d\n", counter);
}

/* TEST 8 ----------------------------------------------------------------*/                                                                                    return (num >> n) & 1;
#include <stdio.h>

// Return 1 if nth bit is set, 0 otherwise
// Function must return 1 if the N-th bit of num is set, and 0 if it is not. 
int check_bit(int num, int n) {
    // Fill in
}

int main() {
    if((check_bit(10, 1))
        &&(check_bit(9, 3))
        &&(!check_bit(10, 2))
        &&(!check_bit(127, 7)))
    {
        printf("All tests passed!\n");
    } else {
        printf("Some tests failed.\n");
    }
}


/* TEST 9 ----------------------------------------------------------------*/
typedef struct TestStruct_s
{
    char a[8];
    short b;
    unsigned int c;
} TestStruct;
sizeof(TestStruct);


/* TEST 10 GIT ----------------------------------------------------------------*/
// squash commits
// push vs force push
// merge VS rebase
// git fetch
// merge conflicts

/* TEST 11 ----------------------------------------------------------------*/
// What is Regex?

/* TEST 12 ----------------------------------------------------------------*/
// Stack VS Heap on embedded systems
// Memory layout, where the variables are allocated

/* TEST 13 ----------------------------------------------------------------*/
// What is interrupt? From which part of the memory it is called?
