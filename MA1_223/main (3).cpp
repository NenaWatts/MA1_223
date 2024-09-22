// This code was taken from https://www.techiedelight.com/queue-implementation-cpp/
// The code has been modified from the original to provide opportunities to learn
#include "queue.hpp"
#include "testqueue.h"
//Describe 5 attributes demonstrated by the code considered poor
//1 Enqueue usues an if statement including (isFul) when it should be (isFull)
//2 Size function returns count +1, when it should just return count
//3 The isFull function uses one equal sign which means it is basically assigning a value, instead of using a double equals
//4 The queue constructor is not done very well 
//5 The deconstructor does not make sure that the memory is properly deallocated (does not use delete)




// main function
int main()
{
    testqueue q;
    q.testdequeueone();
    q.testdequeuetwo();
    q.testenqueueone();
    q.testdequeuetwo();
    q.testisEmpty();
    q.testpeekOne();
    q.testpeektwo();
    q.testsize();
    // call your test functions here!

    return 0;
}

