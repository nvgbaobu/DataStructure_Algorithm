#include <iostream>
#include <stack>

using namespace std;

int main() {
	stack<int> st;
	st.push(10);
	st.push(20);
	st.push(30);
	cout << "Top element: " << st.top() << endl; // Output: 30

	st.pop();
	cout << "Top element after pop: " << st.top() << endl; // Output: 20

	return 0;
}