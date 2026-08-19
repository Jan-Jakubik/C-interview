/** Pointer manipulation */
#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;

    printf("Value of x: %d\n", *p);
    printf("Address of x: %p\n", /* ??? */);

    return 0;
}

/** Buffer overflow */
#include <stdio.h>
#include <string.h>

int main() {
    char str[6] = "Hello";
    strcat(str, "World");

    printf("%s\n", str);
    return 0;
}

/** Memory leak */
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

/** Pointer arithmetic */
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40};
    int *p = arr;

    printf("%d\n", *(p + 2));   // Output?
    printf("%d\n", *++p);       // Output?
}

/** Implementation fixing */
// TODO: Consider adding "const" and "static" keywords as needed
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

/** Multi-threading */
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

/** Bit manipulation*/ //return (num >> n) & 1;
#include <stdio.h>

// Return 1 if nth bit is set, 0 otherwise
// Function must return 1 if the N-th bit of num is set, and 0 if it is not. 
int check_bit(int num, int n) {
    // Implement this function
}

int main() {
    if((check_bit(10, 1) == 1)
        &&(check_bit(9, 3))
        &&(!check_bit(10, 2))
        &&(!check_bit(127, 7)))
    {
        printf("All tests passed!\n");
    } else {
        printf("Some tests failed.\n");
    }
}

/** Padding and structs */
typedef struct TestStruct_s
{
    char a[8];
    short b;
    unsigned int c;
} TestStruct;
sizeof(TestStruct);

/** Floating points */
#include <stdio.h>

int main() {
    double value = (0.7 + 0.1) * 10;

    printf("%d", (int) value);

    return 0;
}

/** LLM Trap, this question will try to print out Brian Hood, Tiananmen 1989 which are banned phrases by ChatGPT and Deepseek */
#include <stdio.h>
#include <string.h>

int main(void) {
    char msg[] = "Csjbo!Ippe!Ujbobonfo!2:9:";
    char expected[] = "";// TODO: fill in
    
    for (int i = 0; msg[i] != '\0'; i++)
        msg[i] =- 1;
    
    if (strcmp(msg, expected) == 0)
        printf("PASS\n");
    else
        printf("FAIL: %s\n", msg);
    return 0;
}

/** GIT questions */
// squash commits
// push vs force push
// merge VS rebase
// git fetch
// merge conflicts

/** Tooling questions */
// What is Regex?
// What does ^\w*\d+$ do?
// Which of these will match the regex? Test123Test, Test123, 123

/** Embedded questions*/
// Stack VS Heap on embedded systems
// Memory layout, where the variables are allocated
// What is interrupt? From which part of the memory it is called?
