#include <iostream>
#include <cmath>
using namespace std;

void arithmetic()
{

    int op = 0;
    float A = 0;
    float B = 0;

    cout << "[1] Select the operation ";
    cout << "[2] Addition ";
    cout << "[3] Substration ";
    cout << "[4] Product";
    cout << "[5] Division  ";

    cin >> op;
    cout << " Enter a number ";

    cin >> A;

    cout << " Enter Second number";
    cin >> B;

    cout << "Result ";

    switch (op)
    {
    case 1:
        cout << (A + B);
        break;
    case 2:
        cout << (A - B);
        break;
    case 3:
        cout << (A * B);
        break;

    case 4:
        cout << (A / B);
        break;

    default:
        cout << "Invalid Input";
        break;
    }

    cout << endl;
}

void trigonometric()
{

    int op = 0;
    float val = 0.0;

    cout << "Selection";

    cout << " [1] Sin";
    cout << " [2] Cos";
    cout << " [3] Tan";
    cout << " Op : ";
    cin >> op;

    cout << " Enter a value";
    cin >> val;

    if (op == 1)
    {
        cout << sin(val);
    }
    else if (op == 2)
    {
        cout << cos(val);
    }

    else
    {
        cout << "Invalid operator";
    }
    cout << endl;
}

void exponential()
{

    float base = 0.0;
    float eee = 0.0;

    cout << " Enter Base";
    cin >> base;

    cout << " Enter expant";
    cin >> eee;

    cout << pow(base, eee);
}

void logarithimic()
{
    float value = 0.0;
    cout << "Enter the value to calculate the log(e): ";
    cin >> value;
    cout << log(value) << endl;
}

int main()
{

    int sel = 0;

    char choice = 'y';

src:

    cout << "Advanced Calculator" << endl;
    cout << "Written by Bhuwan Bhatt\n\n" << endl;

    cout << "[1] Arithmeticn\n";
    cout << "[2] Trigonometric \n";
    cout << "[3] Exponentialn \n";
    cout << "[4] Logarithmicn \n";
    cout << "Your choice:" << endl;

    while (choice == 'y')
    {
        cout << " Enter the type of operation you want to perform" << endl;
        cin >> sel;

        switch (sel)
        {

        case 1:
            arithmetic();
            break;
        case 2:
            trigonometric();
            break;
        case 3:
            exponential();
            break;
        case 4:
            logarithimic();
            break;
        default:
            cout << " Invalid Operation" << endl;
        }

        cout << " Do  you want to continue ? y/n" << endl;

        cin >> choice;

        if (choice == 'n')
        {
            break;
        }
        else if (choice == 'y')
        {
            goto src;
        }
    }

    return 0;
}