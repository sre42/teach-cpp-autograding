#HW2 Doubly Linked Stack 

#First-Name Last-Name

TODO - Update your name in this readme.

TODO - Add a badge from travis CI here

##Problem statement:
Implement the Back-end of an ADT that represents a stack. The class contains two pointers that maintain key locations in 
The Doubly-Linked list.


```
Node<ItemType> *headPtr;    // Pointer to first node in the chain;
Node<ItemType> *topPtr;    // Pointer to (last) node in the chain that contains the stack's top
```
 
You must write code in the class DLinkedStack, inside `DLinkedStack.hpp`. 
The functions that are to be implemented by you are marked with a `//TODO`     

## Constraints 
* The class should support the following types via templates:
    * int
    * float
* The Class must use Node from Node.hpp to represent a node.

## Files to work on

You are required to work on `README.md` and `/src/DLinkedStack.hpp`
You can also modify `main.cpp` to debug your program.
Please **DO NOT MODIFY** any other files. Modifying any other file will result in penalty to your grade.

## Running tests
* To run the program, select the configuration `hw2_run` from the top right and click on run
* You can run the tests using Clion: select the configuration `runAllHW2Tests` from the top right and click on run
* To use Clion's Google test configuration:
    * Goto Run->Edit Configurations..
    * Select the "+" icon on the top left to add a new configuration of type "Google Test"
    * Enter in a name, and also target configuration as "runMainHW4Tests"
    * Select Ok.
    * You can now use this configuration for better test display by CLion.

## Notes
* Make sure your solution compiles and runs. There are no points for code that doesnt compile.
* The Initial template code will compile, but will fail in most of the test cases.
* Look at samples in the class repository for example code.
* It is recommended that you add your **name** and **travis ci badge** to your readme.
* Make sure your last push is before the deadline. Your last push will be considered as your final submission.
* Post questions on Piazza if you had any questions.
* Please contact the course staff if you run into issues. We are here to help you!
* look at this video for how to run CLion tests: https://youtu.be/8Up5eNZ0FLw