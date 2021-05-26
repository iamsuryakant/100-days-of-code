
// CPP code to illustrate
// priorit_queue and its
// various function
#include <iostream>
#include <queue>
using namespace std;

// Drivers Method
int main()
{

    // Creating a priority queue
    priority_queue<int> pq;

    // Pushing elements into
    // the priority_queue
    pq.push(10);
    pq.push(15);
    pq.push(5);
    

    // Displaying th e size of
    // the queue
    cout << pq.size() << " ";

    // Displaying the top elements
    // of the queue
    cout << pq.top() << " ";

    while (pq.empty() == false)
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}
