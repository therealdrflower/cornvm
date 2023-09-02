#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

const int maxText = 1024;
int code[maxText] = {1010, 30,56};

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


int main()
{
    if(code[0] == version){
        printf("\nNUM-C READER VERSION 1010\n\n");
    }else{
        printf("FAILURE! Unable to find matching version\n");
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
        }
        else{
            printf("Undefined keybin at %d\n", i);
            return 1;
        }
    }
}