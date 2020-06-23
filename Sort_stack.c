 #include <bits/stdc++.h> 
using namespace std; 

// This function return the sorted stack 
stack<int> sortStack(stack<int> &input) 
{ 
	stack<int> tmpStack; 

	while (!input.empty()) 
	{ 
		int tmp = input.top(); 
		input.pop(); 
		while (!tmpStack.empty() && tmpStack.top() > tmp) 
		{ 
			// pop from temporary stack and push 
			// it to the input stack 
			input.push(tmpStack.top()); 
			tmpStack.pop(); 
		}  
		tmpStack.push(tmp); 
	} 

	return tmpStack; 
} 
int main() 
{ 
	stack<int> input; 
	input.push(34); 
	input.push(3); 
	input.push(31); 
	input.push(98); 
	input.push(92); 
	input.push(23); 
	stack<int> tmpStack = sortStack(input); 
	cout << "Sorted numbers are:\n"; 

	while (!tmpStack.empty()) 
	{ 
		cout << tmpStack.top()<< " "; 
		tmpStack.pop(); 
	} 
} 
