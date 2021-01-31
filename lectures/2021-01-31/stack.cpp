#include <stack>
#include <iostream>
using namespace std;


// 1 1 0

// 3
// 1 1

// 创建了一个stack的实例，取名叫s，stack中装的是 int
stack<int> s;
int main() {
	int number;		
	int score = 0;

    // 输入

	// 要先读入一个数字，是0才继续读
	cin >> number;
	// 读入数字，挨个入栈，并计算分数
	while(number != 0) {
		// 将非0的数入栈
		s.push(number);
		// 分数 = 旧分数 + 此时（已经入栈了）的栈的大小 * 数字大小
		score = score + s.size() * number;
		cin >> number;
	}

    // 处理

    // 输出
	// 输出分数
	cout << score << endl;

	// 逐个出栈，输出
	while(!s.empty()) {
		// 此时number为出栈的元素
		number = s.top();
		// 移除栈顶元素
		s.pop();
		cout << number << " ";
	}
	cout << endl;
}