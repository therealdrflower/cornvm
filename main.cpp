#include <iostream>
#include <cstdio>
#include <math.h>
#include <string>
#include <vector>
#include <fstream>


using namespace std;

const int maxText = 1024;
//Edit the array below to program the Virtual Machine.
string code[maxText] = {"print","hello Corn","success"};
//Commands
string STOPGOOD = "success";
string STOPBAD = "failure";
string VAR = "var";
string ADD = "add";
string MUL = "multiply";
string DIV = "divide";
string SUB = "subtract";
string PRINT = "print";
string EASTEREGG = "easteregg69funny";
string POW = "pow";
//string POW = "power";
string SQRT = "sqrt"; 
//string SQRT = "squareroot";
string FUNC = "function";
string VAROVER = "varOveride";
string FUNCOVER = "funcOveride";
string PRNTVAR = "printVar";

std::vector<std::string> ram;


int findElementPosition(const std::vector<std::string>& vec, const std::string& element) {
    for (int i = 0; i < vec.size(); ++i) {
        if (vec[i] == element) {
            return i;
        }
    }
    return -1; // Element not found
}

int stopgood()
{
    printf("Program stoped (success)\n");
    return 0;
}

int stopbad()
{
    printf("Program stopped (failure)\n");
    return 1;
}

int vm()
{
    
    printf("\nWELCOME TO THE CORN PROGRAMMING LANGUAGE\n\n");
    for (int i = 0; i < maxText; i++)
    {
        if(code[i] == STOPGOOD)
        {
            stopgood();
            return 0;
        }
        else if(code[i] == STOPBAD)
        {
            stopbad();
            return 0;
        }else if(code[i] == VAR)
        {
            //Name
            ram.push_back(code[i+1]);
            //Value
            ram.push_back(code[i+2]);  
            i++;
            i++;
            //cout << "Attention, variables are not implemented and will do nothing but trigger Undefined errors.\n" << endl;

        }else if(code[i] == PRNTVAR)
        {
            string name = code[i + 1];
            int namePos = findElementPosition(ram, name);
            string value = ram[namePos + 1];
            if (namePos != -1) {
                cout << value << "\n" << endl;
            } else {
                cout << "Cannot print value of variable!" << endl;
                return 1;
            }
            i++;
        }
        else if(code[i] == FUNC)
        {
            cout << "Attention, functions are not implemented and will do nothing but trigger Undefined errors.\n" << endl;
        }
        else if(code[i] == ADD)
        {
            int num_one = stoi(code[i+1]);
            int num_two = stoi(code[i+2]);
            cout << num_one + num_two << endl;
            i++;
            i++;
        }else if(code[i] == SUB)
        {
            int num_one = stoi(code[i+1]);
            int num_two = stoi(code[i+2]);
            cout << num_one - num_two << endl;
            i++;
            i++;

        }else if(code[i] == MUL)
        {
            int num_one = stoi(code[i+1]);
            int num_two = stoi(code[i+2]);
            cout << num_one * num_two << endl;
            i++;
            i++;
        }else if(code[i] == DIV)
        {
            int num_one = stoi(code[i+1]);
            int num_two = stoi(code[i+2]);
            cout << num_one / num_two << endl;
            i++;
            i++;
        }else if(code[i] == PRINT)
        {
            cout << code[i + 1] << endl;
            i++;
        }else if(code[i] == EASTEREGG)
        {
            for(int t = 1; t < 70; t++)
            {
                cout << "Haha very funny number, I want a new funny number " << t << endl;
            }
        }else if(code[i] == POW)
        {
            double num1 = stoi(code[i + 1]);
            double num2 = stoi(code[i + 2]);
            double result = pow(num1,num2);
            cout << result << endl;
            i++;
            i++;
        }else if(code[i] == SQRT)
        {
            double number = stoi(code[i + 1]);
            cout << fixed << sqrt(number) << endl;
            i++;
        }
        else{
            printf("Undefined command at %d\n", i);
            return 1;
        }
    }
}
int main()
{
    vm();
    return 0;
}