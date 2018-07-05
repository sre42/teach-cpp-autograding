# HW1 First-Name Last-Name
TODO - Update your name in this readme.

TODO - Add a badge from travis CI here

## Problem statement:

Design and implement an ADT that represents a triangle. The data for the ADT must include the three sides of the triangle. This data must be in the private section of the class that implements the ADT.

you must write code in the class **Triangle**, inside `triangle.h`. The class **Triangle** inherits from the interface **triangle_interface**
Include at least two initialization operations(constructors): 


* One that provides default values for the ADT’s data (default constructor) - default values should be set to be (3, 4, 5)
* Another that sets this data to client-supplied values (parametrized constructor)
    * When inputs don't form a triangle, set values of all sides to 0.
    * Reference: http://www.wikihow.com/Determine-if-Three-Side-Lengths-Are-a-Triangle

The ADT also must include operations that:( take a look inside the `triangle_interface.h`):

* Retrieve(get) the values from the ADT
* Change(set) the values of the ADT 
* Compute the triangle’s area
* Determine whether the triangle is
    * a right triangle
    * an equilateral triangle
    * an isosceles triangle.
    
## Constraints
* The class should support the following types via templates:
    * int
    * Float
    * Double

## Files to work on
You are required to work on `README.md` and `/src/triangle.h`
You can also modify `main.cpp` to debug your program.
Please **DO NOT MODIFY** any other files. Modifying any other file will result in penalty to your grade.

## Running tests
* To run the program, select the configuration `hw1_run` from the top right and click on run
* You can run the tests using Clion: select the following configurations from the top right and click on run
    * 00_runHW1TriangleBasicTests
    * 01_runHW1TriangleInvalidInputTest
    * 02_runHW1TrianglePerimeterTests
    * 03_runHW1TriangleAreaTests
    * 04_runHW1TriangleCheckTests
* To use Clion's Google test configuration:
    * Goto Run->Edit Configurations..
    * Select the "+" icon on the top left to add a new configuration of type "Google Test"
    * Enter in a name, and also target configuration as any one of the above
    * Select Ok.
    * You can now use this configuration for better test display by CLion.

## Note
* The program would not compile at first because the class hasn't been completed in `triangle.h`
* It is required that you add your **name** and **travis ci badge** to your readme.
* Check the logs from Travis to verify the correctness of your program.
* The Initial code will **not necessarily** compile. You will have to write the necessary code.
* Make sure your last push is before the deadline. Your last push will be considered as your final submission.
* There is **no partial credit** for code that does not compile
* If you need to be considered for partial grade for any reason(failing tests on travis,etc). Then email the staff before the deadline. Late email requests may not be considered.
* Post questions on Piazza if you have any questions.
* Please contact the course staff if you run into issues. We are here to help you!
* look at this video for how to run CLion tests: https://youtu.be/8Up5eNZ0FLw
