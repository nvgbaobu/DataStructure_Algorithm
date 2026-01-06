#include <iostream>
#include <queue>

using namespace std;
int main()	{
	queue<int> qu;
	qu.push(10);
	qu.push(20);
	qu.push(30);

	cout << "Front element: " << qu.front() << endl; // Output: 10

	qu.pop();
	cout << "Front element after pop: " << qu.front() << endl; // Output: 20

	return 0;
}