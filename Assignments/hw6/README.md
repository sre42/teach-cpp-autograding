#HW6 Hashed Dictionary 

#First-Name Last-Name

TODO - Update your name in this readme.

TODO - Add a badge from travis CI here

##Problem statement:
Implement a Hashed Dictionary. You will have to first implement the necessary functions in `HashedEntry.h`
(which inherits from `Entry.h`). The Dictionary must maintain an array of HashedEntries. 
Look at the implemented Constructor and toVector functions for insights. 
You have to add new HashedEntries to front of the list when the key has the same hash index.
Look at this link for insights on our implementation: https://en.wikipedia.org/wiki/Hash_table 

 
## Files to work on
* `HashedEntry.h` Implement the necessary functions
* `HashedDictionary.h` Implement the necessary functions marked with T-O-D-O's
* You can also modify `main.cpp` to debug your program.
* `README.md` to add your name and badge
Please **DO NOT MODIFY** any other files. Modifying any other file will result in penalty to your grade.
      
## Exceptions to be thrown
* Throw the default exception in the function getItem() in `HashedDictionary.h` (when item is not found)

## Constraints 
* The class should support the following types via templates:
    * `<int,string>` (key is int, Item stored is string) 


## Running tests
* To run the program, select the configuration `hw6_run` from the top right and click on run
* You can run the tests using Clion: select the folowing configurations from the top right and click on run
    * `01_runHW6HashedEntryTests`
    * `02_runHW6HashedDictionaryConstructorTests`
    * `03_runHW6AddTests`
    * `04_runHW6RemoveTests`
    * `05_runHW6MiscTests`
* To use Clion's Google test configuration:
    * Goto Run->Edit Configurations..
    * Select the "+" icon on the top left to add a new configuration of type "Google Test"
    * Enter in a name, and also target configuration as any one of the above
    * Select Ok.
    * You can now use this configuration for better test display by CLion.

## Notes
* Make sure your solution compiles and runs. **There are no points for code that doesn't compile**.
* Check the logs from Travis to verify the correctness of your program.
* The Initial code will **not necessarily** compile. You will have to write the necessary code.
* It is recommended that you add your name and travis ci badge to your readme.
* Make sure your last push is before the deadline. Your last push will be considered as your final submission.
* If you need to be considered for partial grade for any reason(failing tests on travis,etc). Then email the staff before the deadline. Late email requests may not be considered.
* Post questions on Piazza if you have any questions.
* Please contact the course staff if you run into issues. We are here to help you!
* look at this video for how to run CLion tests: https://youtu.be/8Up5eNZ0FLw
