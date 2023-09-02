#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

const int maxText = 1024;
double code[maxText] = {1010, 31,4.5,45.5};

int version = 1010;

//Keynum
int STOPGOOD = 0;
int STOPBAD = 1;
int VAR = 10;
int ADD = 11;
int MUL = 22;
int DIV = 21;
int SUB = 12;
int PRINT = 30;
int EASTEREGG = 69;
int POW = 31;
int SQRT = 32; 

int main()
{
    if(code[0] == version){
        printf("\nNUM-C READER VERSION 1010\n\n");
    }else{
        printf("FAILURE! Unable to find matching version\n");
        return 1;
    }
    for (int i = 1; i < maxText; i++)
    {
        if(code[i] == STOPGOOD)
        {
            printf("Program stoped (success)\n");
            return 0;
        }
        else if(code[i] == STOPBAD)
        {
            printf("Program stopped (failure)\n");
            return 1;
        }else if(code[i] == VAR)
        {
            int name = code[i + 1];
            int value = code[i + 2];
            cout << "NAME " << name << " VALUE " << value << "\n" << endl;
            i++;
            i++;

        }else if(code[i] == ADD)
        {
            int num_one = code[i+1];
            int num_two = code[i+2];
            cout << num_one + num_two << endl;;
            i++;
            i++;
        }else if(code[i] == SUB)
        {
            int num_one = code[i+1];
            int num_two = code[i+2];
            cout << num_one - num_two << endl;;
            i++;
            i++;

        }else if(code[i] == MUL)
        {
            int num_one = code[i+1];
            int num_two = code[i+2];
            cout << num_one * num_two << endl;;
            i++;
            i++;
        }else if(code[i] == DIV)
        {
            int num_one = code[i+1];
            int num_two = code[i+2];
            cout << num_one / num_two << endl;;
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
            double num1 = code[i + 1];
            double num2 = code[i + 2];
            double result = pow(num1,num2);
            cout << result << endl;
            i++;
            i++;
        }else if(code[i] == SQRT)
        {
            double number = code[i + 1];
            cout << fixed << sqrt(number) << endl;
            i++;
        }
        else{
            printf("Undefined keynum at %d\n", i);
            return 1;
        }
    }
}