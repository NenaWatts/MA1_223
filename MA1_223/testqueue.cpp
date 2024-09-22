
#include "testqueue.h"
void testqueue::testenqueueone()
{
	queue* testQ = new queue();
	testQ->enqueue(1);
	testQ->enqueue(2);
	int count = 0;
	count = testQ->size();
	if (count == 2)
	{
		cout << "Number of elements in the queue, should be two:" << count << endl;
	}
	else
	{
		cout << "Incorect number of enqueued elements" << endl;
	}
	
	delete testQ;
}

void testqueue::testenqueuetwo()
{
	queue* testQ = new queue();
	testQ->enqueue(1);
	int count = 0;
	count = testQ->size();
	{
		if (count == 1)
		{
			cout << "Correct amount of elements in the queue (should be 1):" << count << endl;

		}
		else
		{
			cout << "Incorrect amount of elements within the queue:" << count << endl;
		}
	}

}

void testqueue::testisEmpty()
{
	queue* testQ = new queue();
	if (testQ->isEmpty())
	{
		std::cout << "The queue is empty" << endl;
	}
	else
	{
		std::cout << "The queue is not empty" << endl;
	}
}

void testqueue::testdequeueone()
{
	queue* testQ = new queue();
	testQ->enqueue(1);
	testQ->enqueue(2);
	testQ->dequeue();
	int count = 0;
	count = testQ->size();
	cout << "Number of elements in the queue" << count << endl;

}

void testqueue::testdequeuetwo()
{
	queue* testQ = new queue();
	std::cout << "Should print out underflow value";
	testQ->dequeue();
}

void testqueue::testpeekOne()
{
	queue* testQ = new queue();
	int count = 0;
	count = testQ->peek();
	if (count == numeric_limits<int>::min())
	{
		cout << "Peek returned correct value" << endl;
	}
	else
	{
		cout << "Peek returned incorrect value" << endl;
	}


}

void testqueue::testpeektwo()
{
	queue* testQ = new queue();
	int count = 0;
	testQ->enqueue(1);
	testQ->enqueue(2);

	count = testQ->peek();

	if (count == 1)
	{
		cout << "Returned peek value was correct" << endl;
	}
	else
	{
		cout << "Returned peek value was incorrect" << endl;
	}


}


void testqueue::testsize()
{
	queue* testQ = new queue();
	testQ->enqueue(1);
	testQ->enqueue(2);
	int count = 0;
	count = testQ->size();

	if (count == 2)
	{
		cout << "Queue size is correct size, which is:" << count << endl;
	}
	else
	{
		cout << "Quese size is not correct and is:" << count << endl;
	}
}

void testqueue::testisfull()
{
	queue* testQ = new queue();
	testQ->enqueue(1);
	testQ->enqueue(2);
	testQ->enqueue(3);
	
	if (testQ->isFull())
	{
		cout << "The queue is full" << endl;
	}
	else
	{
		cout << "The queue is not full" << endl;
	}
	
}

