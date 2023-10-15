////prefix
//#include <iostream>
//#include <stack>
//#include <string>
//#include <cmath>
//using namespace std;

//int evaluatePrefix(string expression) {
//    stack<int> s;
//    int result = 0;
//
//    for (int i = expression.size() - 1; i >= 0; --i) {
//        if (isdigit(expression[i])) {
//            s.push(expression[i] - '0');
//        } else {
//            int operand1 = s.top(); s.pop();
//            int operand2 = s.top(); s.pop();
//
//            switch(expression[i]) {
//                case '+':
//                    result = operand1 + operand2;
//                    break;
//                case '-':
//                    result = operand1 - operand2;
//                    break;
//                case '*':
//                    result = operand1 * operand2;
//                    break;
//                case '/':
//                    result = operand1 / operand2;
//                    break;
//                case '^':
//                    result = pow(operand1, operand2);
//                    break;
//            }
//            s.push(result);
//        }
//    }
//    return s.top();
//}
//
//int main() {
//    string prefixExpression = "*+42^38";
//    cout << "Result of Prefix Expression: " << evaluatePrefix(prefixExpression) << endl;
//    return 0;
//}


//postfix
#include <iostream>
#include <stack>
#include <string>
#include <cmath>
using namespace std; 
int evaluatePostfix(string expression) {
    stack<int> s;

    for (char ch : expression) {
        if (isdigit(ch)) {
            s.push(ch - '0');
        } else {
            int operand2 = s.top(); s.pop();
            int operand1 = s.top(); s.pop();

            switch(ch) {
                case '+':
                    s.push(operand1 + operand2);
                    break;
                case '-':
                    s.push(operand1 - operand2);
                    break;
                case '*':
                    s.push(operand1 * operand2);
                    break;
                case '/':
                    s.push(operand1 / operand2);
                    break;
                case '^':
                    s.push(pow(operand1, operand2));
                    break;
            }
        }
    }
    return s.top();
}

int main() {
    string postfixExpression = "42+38^*";
    cout << "Result of Postfix Expression: " << evaluatePostfix(postfixExpression) << endl;
    return 0;
}





//infix
//#include <iostream>
//#include <stack>
//#include <string>
//#include <cmath>
//#include <map>
//using namespace std;
//
//int precedence(char op) {
//    if (op == '^') return 3;
//    if (op == '*' || op == '/') return 2;
//    if (op == '+' || op == '-') return 1;
//    return -1;
//}
//
//int applyOperator(int a, int b, char op) {
//    switch(op) {
//        case '+':
//            return a + b;
//        case '-':
//            return a - b;
//        case '*':
//            return a * b;
//        case '/':
//            return a / b;
//        case '^':
//            return pow(a, b);
//        default:
//            return 0;
//    }
//}
//
//int evaluateInfix(string expression) {
//    stack<int> values;
//    stack<char> operators;
//    map<char, int> precedenceMap{{'+', 1}, {'-', 1}, {'*', 2}, {'/', 2}, {'^', 3}};
//    
//    for (char ch : expression) {
//        if (isdigit(ch)) {
//            values.push(ch - '0');
//        } else if (ch == '(') {
//            operators.push(ch);
//        } else if (ch == ')') {
//            while (!operators.empty() && operators.top() != '(') {
//                char op = operators.top(); operators.pop();
//                int operand2 = values.top(); values.pop();
//                int operand1 = values.top(); values.pop();
//                values.push(applyOperator(operand1, operand2, op));
//            }
//            operators.pop(); // Remove '(' from the stack
//        } else {
//            while (!operators.empty() && precedenceMap[ch] <= precedenceMap[operators.top()]) {
//                char op = operators.top(); operators.pop();
//                int operand2 = values.top(); values.pop();
//                int operand1 = values.top(); values.pop();
//                values.push(applyOperator(operand1, operand2, op));
//            }
//            operators.push(ch);
//        }
//    }
//
//    while (!operators.empty()) {
//        char op = operators.top(); operators.pop();
//        int operand2 = values.top(); values.pop();
//        int operand1 = values.top(); values.pop();
//        values.push(applyOperator(operand1, operand2, op));
//    }
//    return values.top();
//}
//
//int main() {
//    string infixExpression = "(4+2)*(3^8)";
//    cout << "Result of Infix Expression: " << evaluateInfix(infixExpression) << endl;
//    return 0;
//}


