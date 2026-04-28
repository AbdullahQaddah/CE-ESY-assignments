When you run the program, it performs the following steps:


1-Prompts the user to enter a name.

2-Appends the suffix CE-ESY to the input.

3-Iteratively writes each character into the Circular Buffer.

4-Reads the characters back out and displays them.

5-Verifies that the buffer is empty after processing.


Function Description:


initBuffer: Initializes the head, tail, and count to 0.

isFull: Returns true (1) if the buffer has reached maximum capacity.

isEmpty: Returns true (1) if the buffer contains no elements.

writeToBuffer: Adds a character to the tail and moves the index circularly.

readFromBuffer: Removes a character from the head and moves the index circularly.
