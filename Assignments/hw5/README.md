#HW5 Operator Overloading 

#First-Name Last-Name

TODO - Update your name in this readme.

TODO - Add a badge from travis CI here

##Problem statement:
Overload the operators +,-,* in the class Matrix. Look into the file `Matrix.h` for more details.

 
## Files to work on
* `Matrix.h` Overload the necesseray Operators
* You can also modify `main.cpp` to debug your program.
* `README.md` to add your name and badge
Please **DO NOT MODIFY** any other files. Modifying any other file will result in penalty to your grade.
      
## Exceptions to be thrown
Throw the default exception whereever necessary (Incorrect sizes, etc)

## Matrix Multiplication Order
```

Given the statement: Mat3 = Mat1 * Mat2;

Mat1 ={{1,  3, -3},
       {-4, 4, 5},
       {-1, 2, 0},
       {6,  7, 8}};

Mat2 ={{-2, 9, 3,  1},
       {10, 4, 5,  11},
       {-1, 2, 12, 0}};

Then Mat3 will be:

Mat3 :{{31, 15,  -18, 34},
       {43, -10, 68,  40},
       {22, -1,  7,   21},
       {50, 98,  149, 83}};

```
## Constraints 
* The class should support the following types via templates:
    * int
    * float


## Running tests
* To run the program, select the configuration `hw5_run` from the top right and click on run
* You can run the tests using Clion: select the configuration `runAllHW5Tests` from the top right and click on run
* To use Clion's Google test configuration:
    * Goto Run->Edit Configurations..
    * Select the "+" icon on the top left to add a new configuration of type "Google Test"
    * Enter in a name, and also target configuration as "runMainHW5Tests"
    * Select Ok.
    * You can now use this configuration for better test display by CLion.

## Notes
* Make sure your solution compiles and runs. **There are no points for code that doesn't compile**.
* The Initial code will **not** compile. You will have to implement the necessary functions.
* Look at samples in the class repository for example code.
* It is recommended that you add your name and travis ci badge to your readme.
* Make sure your last push is before the deadline. Your last push will be considered as your final submission.
* If you need to be considered for partial grade for any reason(failing tests on travis,etc). Then email the staff before the deadline. Late email requests may not be considered.
* Post questions on Piazza if you have any questions.
* Please contact the course staff if you run into issues. We are here to help you!
* look at this video for how to run CLion tests: https://youtu.be/8Up5eNZ0FLw
