#include <stdio.h>

void catch_test(bool do_throw)
{
    if (do_throw) { 
        printf("throwing exception\n");
        throw 20;
    }
    printf("not throwing exception\n");
}

extern "C" void do_exception_test()
{
    printf("Starting exception test\n");

    try {
        catch_test(false);
        printf("PASS - no exception thrown\n");
    }
    catch(...) {
        printf("ERROR - exception shouldn't be throw\n");
    }

    bool exception_caught = false;
    try {
        catch_test(true);
    }
    catch(...) {
        printf("PASS - exception should be throw\n");
        exception_caught = true;
    }

    if (!exception_caught) {
        printf("ERROR - exception should have been throw\n");
    }
}
