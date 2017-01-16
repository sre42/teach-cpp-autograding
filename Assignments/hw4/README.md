#HW4 Inheritance and Exceptions 

#First-Name Last-Name

TODO - Update your name in this readme.

TODO - Add a badge from travis CI here

##Problem statement:
Implement a class hierarchy as shown in the accompanying class relationship UML. 
You must precisely follow the class prototypes as shown in the UML Diagram.
Please get started early. 
The file `main.cpp` contains code that can give you insight on how the classes are to be used.
There is a graphics library embedded. It is used for demonstration only, run `SDL_Graphics` after all your tests pass.

 
## Classes to implement and files to work on
* You must implement the following classes:
    * Circle - in the file `/src/Circle.h`
    * Rectangle - in the file `/src/Rectangle.h`
    * Square - in the file `/src/Square.h`
* You can also modify `main.cpp` to debug your program.
* `README.md` to add your name and badge
Please **DO NOT MODIFY** any other files. Modifying any other file will result in penalty to your grade.
      
## Exceptions to be thrown
You have to throw exceptions with a specified error code on certain conditions. Look inside the CustomException class to see how you may be able to throw the exception with error codes.

* Throw a CustomException with the error code 22 when instantiating a Circle with `radius <= 0`
* Throw a CustomException with the error code 33 when instantiating a Rectangle/Square with width or height or `side <= 0`

## Constraints 
* The classes should support the following types via templates:
    * int
    * float
* The Classes must inherit from other classes as shown in the UML Diagram
* The functions/constructors inside the classes must be defined as per the UML


## Running tests
* To run the program, select the configuration `hw4_run` from the top right and click on run
* You can run the tests using Clion: select the configuration `runAllHW4Tests` from the top right and click on run
* To use Clion's Google test configuration:
    * Goto Run->Edit Configurations..
    * Select the "+" icon on the top left to add a new configuration of type "Google Test"
    * Enter in a name, and also target configuration as "runMainHW4Tests"
    * Select Ok.
    * You can now use this configuration for better test display by CLion.

## Notes
* Make sure your solution compiles and runs. **There are no points for code that doesnt compile**.
* The Initial code will **not** compile. You will have to implement the necessary classes.
* Look at samples in the class repository for example code.
* Refer to the slides to see example UML and implementation hints
* It is recommended that you add your name and travis ci badge to your readme.
* Make sure your last push is before the deadline. Your last push will be considered as your final submission.
* If you need to be considered for partial grade for any reason(failing tests on travis,etc). Then email the staff before the deadline. Late email requests may not be considered.
* Post questions on Piazza if you have any questions.
* Please contact the course staff if you run into issues. We are here to help you!
* You can run the configuration `SDL_Graphics` after all your tests pass
* look at this video for how to run CLion tests: https://youtu.be/8Up5eNZ0FLw


## UML Diagram

![UML Diagram](/hw4-class-relationship.png?raw=true "")