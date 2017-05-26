#include <iostream>
#include <stack>
#include <cmath>

using namespace std;

stack<int> s;

string run(char c) {
    switch (c) {
        case '0':
            s.push(0);
            break;
        case '1':
            s.push(1);
            break;
        case '2':
            s.push(2);
            break;
        case '3':
            s.push(3);
            break;
        case '4':
            s.push(4);
            break;
        case '5':
            s.push(5);
            break;
        case '6':
            s.push(6);
            break;
        case '7':
            s.push(7);
            break;
        case '8':
            s.push(8);
            break;
        case '9':
            s.push(9);
            break;
        case '+': {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            s.push(a + b);
            break;
        }
        case '-': {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            s.push(b - a);
            break;
        }
        case '*': {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            s.push(b * a);
            break;
        }
        case '/': {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            s.push((int) floor((double) b / a));
            break;
        }
        case 'p': {
            int a = s.top();
            s.pop();
            return to_string(a);
        }
        default:
            return "";
    }
    return "";
}

void loop() {
    while (true) {
        string input;
        cout << ">> ";
        cin >> input;
        for (int i = 0; i < input.length(); i++) {
            string output = run(input[i]);
            if (!output.empty()) {
                cout << output << endl;
            }
        }
    }
}

int main() {
    cout << "untitled interpreter" << endl;
    loop();
    return 0;
}
