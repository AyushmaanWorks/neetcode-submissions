class Solution {
public:

    int process(int a, int b, char c) {
        switch (c) {
            case '+':
                return a + b;

            case '-':
                return a - b;

            case '*':
                return a * b;

            case '/':
                return a / b;

            default:
                return 0;
        }
    }

    int evalRPN(vector<string>& tokens) {

        stack<int> ns;

        for(int i = 0; i<=tokens.size()-1; i++){
            if(tokens[i]=="+" || tokens[i]=="-"|| tokens[i]=="*" || tokens[i]=="/"){
                int b = ns.top();ns.pop();
                int a = ns.top();ns.pop();
                ns.push(process(a,b,tokens[i][0]));
            }else{
                ns.push(stoi(tokens[i]));
            }
        }

        if(!ns.empty()){
            return ns.top();
        }else{
            return 0;
        }



    }
};
