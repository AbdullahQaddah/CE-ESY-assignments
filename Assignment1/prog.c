#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 25

// Circular Buffer Structure
typedef struct {
    char data[BUFFER_SIZE];
    int head;   // Read index
    int tail;   // Write index
    int count;  // Number of elements currently in the buffer
} CircularBuffer;

// 1-Initialization
void initBuffer(CircularBuffer *p) {
    p->head  = 0;  // Initial position is 0
    p->tail  = 0;  // Initial position is 0
    p->count = 0;  // Initial number of elements is 0
}

// Check if the buffer is full
int isFull(CircularBuffer *p) {
    return p->count == BUFFER_SIZE; // Buffer is full when count equals buffer size
}

// Check if the buffer is empty
int isEmpty(CircularBuffer *p) {
    return p->count == 0; // Buffer is empty when count is 0
}

// 2-Write Function (Insert)
void writeToBuffer(CircularBuffer *p, char data) {
    // Handling Overflow
    if (isFull(p)) {
        printf("\nBuffer Overflow Cannot add data: '%c'\n", data);
        return;
    }
    
    p->data[p->tail] = data;
    p->tail = (p->tail + 1) % BUFFER_SIZE; // Circular movement
    p->count++;
}

// 3-Read Function (Remove)
char readFromBuffer(CircularBuffer *p) {
    // Handling Underflow
    if (isEmpty(p)) {
        printf("\nBuffer Underflow No data to read.\n");
        return '\0'; 
    }
    
    char value = p->data[p->head];
    p->head = (p->head + 1) % BUFFER_SIZE; // Circular movement
    p->count--;
    
    return value;
}

// 4-Main Function
int main() {
    CircularBuffer myBuffer;
    initBuffer(&myBuffer);

    char name[50];
    char lastName[100];

    // 1-Input name from standard input
    printf("Enter your name: ");
    scanf("%s", name); 

    // 2-add "CE-ESY" to the name
    strcpy(lastName, name);
    strcat(lastName, "CE-ESY");

    printf("\nString is going to be stored: %s\n", lastName);

    // 3-Store the result into the Circular Buffer
    printf("Storing data into the Circular Buffer...\n");
    for (int i = 0; i < strlen(lastName); i++) {
        writeToBuffer(&myBuffer, lastName[i]);
    }

    // 4-Read and display the data
    printf("\nReading data from the Buffer: ");
    while (!isEmpty(&myBuffer)) {
        char c = readFromBuffer(&myBuffer);
        if (c != '\0') {
            printf("%c", c);
        }
    }
    printf("\n");

    // 5-Verify if the buffer is empty after reading
    if (isEmpty(&myBuffer)) {
        printf("\nSuccess: Buffer is now empty.\n");
    } else {
        printf("\nError: Buffer is not empty.\n");
    }

    return 0;
}
