#include "Labwork6.h"
#
#include <iostream>
#include <math.h>
#include "ArrayUtil.h"
#
#define Task1ArraySize 5
#define EPSILON 0.00001
#
#define NO_EXCEPTION 0
#define INVALID_INPUT_EXCEPTION -1

using namespace std;

int Labwork6::RunTasks()
{
    TaskSelection();

    return NO_EXCEPTION;
}

int Labwork6::RunTask(int taskNumber)
{
    TaskSelection(taskNumber);

    return NO_EXCEPTION;
}


int Labwork6::TaskSelection()
{
    int taskNumber;

    TaskSelectionInputHandling(taskNumber);

    TaskSelection(taskNumber);

    return NO_EXCEPTION;
}

int Labwork6::TaskSelection(int taskNumber)
{
    switch (taskNumber) {
    case 1:
        Task1main();
        break;
    case 2:
        Task2main();
        break;
    case 3:
        Task3main();
        break;
    case 4:
        Task4main();
        break;
    case 5:
        Task5main();
        break;
    }

    return NO_EXCEPTION;
}

int Labwork6::TaskSelectionInputHandling(int& taskNumber)
{
    while (TaskSelectionInputTaskNumber(taskNumber))
        cout << "Invalid input\n";

    return 0;
}

int Labwork6::TaskSelectionInputTaskNumber(int& taskNumber)
{
    cout << "Choose task number (1 - 5): ";
    cin >> taskNumber;

    if (taskNumber < 1 || taskNumber > 5)
        return INVALID_INPUT_EXCEPTION;
    return NO_EXCEPTION;
}


int Labwork6::Task1main()
{
    int length;

    Task1InputHandling(length);

    int* resultArray = Task1(length);

    Task1Parse(resultArray, length);

    Task1CleanMemory(resultArray);

    return NO_EXCEPTION;
}

int Labwork6::Task1Smain()
{
    int length;

    cout << "Static size" << endl;

    int* resultArray = Task1();

    Task1Parse(resultArray, Task1ArraySize);

    Task1CleanMemory(resultArray);

    return NO_EXCEPTION;
}

int Labwork6::Task1InputHandling(int& length)
{
    while (Task1InputLength(length))
        cout << "Invalid input\n";

    return NO_EXCEPTION;
}

int Labwork6::Task1InputLength(int& length)
{
    cout << "Input number of powers: ";
    cin >> length;

    if (length < 1)
        return INVALID_INPUT_EXCEPTION;
    return NO_EXCEPTION;
}

int Labwork6::Task1Parse(int* array, int length)
{
    ArrayUtil::ConsoleLog<int>(array, length);

    return NO_EXCEPTION;
}

int Labwork6::Task1CleanMemory(int* resultArray)
{
    delete[] resultArray;

    return NO_EXCEPTION;
}

int* Labwork6::Task1()
{
    int array[Task1ArraySize];

    array[0] = 2;

    for (int i = 1; i < Task1ArraySize; i++)
        array[i] = array[i - 1] * 2;

    return array;
}

int* Labwork6::Task1(int length)
{
    int* array = new int[length];

    array[0] = 2;

    for (int i = 1; i < length; i++)
        array[i] = array[i - 1] * 2;

    return array;
}


int Labwork6::Task2main()
{
    int* array;
    int length;

    Task2InputHandling(array, length);

    ArrayUtil::ConsoleLog<int>(array, length);

    int K;
    int* resultArray = Task2(array, length, K);

    Task2Parse(resultArray, K);

    Task2CleanMemory(array, resultArray);

    return NO_EXCEPTION;
}

int Labwork6::Task2InputHandling(int*& array, int& length)
{
    while (Task2InputLength(length))
        cout << "Invalid input\n";

    array = new int[length];

    for (int i = 0; i < length; i++) {
        while (Task2InputArrayElement(array[i]))
            cout << "Invalid input\n";
    }

    return NO_EXCEPTION;
}

int Labwork6::Task2InputLength(int& length)
{
    cout << "Input amount of numbers (> 0): ";
    cin >> length;

    if (length < 1)
        return INVALID_INPUT_EXCEPTION;
    return NO_EXCEPTION;
}

int Labwork6::Task2InputArrayElement(int& N)
{
    cout << "Input array element: ";
    cin >> N;

    return NO_EXCEPTION;
}

int Labwork6::Task2Parse(int* array, int length)
{
    cout << "Number of even numbers: " << length << endl;

    ArrayUtil::ConsoleLog<int>(array, length);

    return NO_EXCEPTION;
}

int Labwork6::Task2CleanMemory(int* array, int* resultArray)
{
    delete[] array;
    delete[] resultArray;

    return NO_EXCEPTION;
}

int* Labwork6::Task2(int* array, int length, int& outK) {
    outK = 0;
    
    for (int i = length - 1; i >= 0; i--) {
        if (array[i] % 2 == 0)
            outK++;
    }

    int* result = new int[outK];
    int resultCounter = 0;

    for (int i = length - 1; i >= 0; i--) {
        if (array[i] % 2 == 0)
            result[resultCounter++] = array[i];
    }

    return result;
}


int Labwork6::Task3main()
{
    int* array;
    int length;
    int K;

    Task3InputHandling(array, length, K);

    int* resultArray = Task3(array, length, K);

    Task3Parse(resultArray, length / K);

    Task3CleanMemory(array, resultArray);

    return NO_EXCEPTION;
}

int Labwork6::Task3InputHandling(int*& array, int& length, int& K)
{
    while (Task3InputLength(length))
        cout << "Invalid input\n";

    array = new int[length];

    for (int i = 0; i < length; i++) {
        while (Task3InputArrayElement(array[i]))
            cout << "Invalid input\n";
    }

    while (Task3InputK(K))
        cout << "Invalid input\n";

    return NO_EXCEPTION;
}

int Labwork6::Task3InputLength(int& length)
{
    cout << "Input amount of numbers (> 0): ";
    cin >> length;

    if (length < 1)
        return INVALID_INPUT_EXCEPTION;
    return NO_EXCEPTION;
}

int Labwork6::Task3InputArrayElement(int& N)
{
    cout << "Input array element: ";
    cin >> N;

    return NO_EXCEPTION;
}

int Labwork6::Task3InputK(int& K)
{
    cout << "Number of element groups (> 0): ";
    cin >> K;

    if (K < 1)
        return INVALID_INPUT_EXCEPTION;
    return NO_EXCEPTION;
}

int Labwork6::Task3Parse(int* array, int length)
{
    ArrayUtil::ConsoleLog<int>(array, length);

    return NO_EXCEPTION;
}

int Labwork6::Task3CleanMemory(int* array, int* resultArray)
{
    delete[] array;
    delete[] resultArray;

    return NO_EXCEPTION;
}

int* Labwork6::Task3(int* array, int length, int K) {
    int resultArrayLength = length / K;
    int* result = new int[resultArrayLength];

    for (int i = 0; i < resultArrayLength; i++)
        result[i] = array[i * K + 1];

    return result;
}


int Labwork6::Task4main()
{
    int* array;
    int length;

    Task4InputHandling(array, length);

    bool result = Task4(array, length);

    Task4Parse(result);

    Task4CleanMemory(array);

    return NO_EXCEPTION;
}

int Labwork6::Task4InputHandling(int*& array, int& length)
{
    while (Task3InputLength(length))
        cout << "Invalid input\n";

    array = new int[length];

    for (int i = 0; i < length; i++) {
        while (Task3InputArrayElement(array[i]))
            cout << "Invalid input\n";
    }

    return NO_EXCEPTION;
}

int Labwork6::Task4InputLength(int& length)
{
    cout << "Input amount of numbers (> 0): ";
    cin >> length;

    if (length < 1)
        return INVALID_INPUT_EXCEPTION;
    return NO_EXCEPTION;
}

int Labwork6::Task4InputArrayElement(int& N)
{
    cout << "Input array element: ";
    cin >> N;

    return NO_EXCEPTION;
}

int Labwork6::Task4Parse(bool result)
{
    if (result)
        cout << "Sequense is geometric progression\n";
    else
        cout << "Sequense is NOT geometric progression\n";

    return NO_EXCEPTION;
}

int Labwork6::Task4CleanMemory(int* array)
{
    delete[] array;

    return NO_EXCEPTION;
}

bool Labwork6::Task4(int* array, int length) {
    if (length < 2)
        return false;

    double ratio = array[1] / array[0];
    
    for (int i = 2; i < length; i++) {
        if (abs(array[i] / array[i - 1] - ratio) > EPSILON)
            return false;
    }

    return true;
}


int Labwork6::Task5main()
{
    int* array;
    int length;

    Task5InputHandling(array, length);

    int K;
    int* resultArray = Task5(array, length, K);

    Task5Parse(resultArray, K);

    Task5CleanMemory(array, resultArray);

    return NO_EXCEPTION;
}

int Labwork6::Task5InputHandling(int*& array, int& length)
{
    while (Task3InputLength(length))
        cout << "Invalid input\n";

    array = new int[length];

    for (int i = 0; i < length; i++) {
        while (Task3InputArrayElement(array[i]))
            cout << "Invalid input\n";
    }

    return NO_EXCEPTION;
}

int Labwork6::Task5InputLength(int& length)
{
    cout << "Input amount of numbers (> 0): ";
    cin >> length;

    if (length < 1)
        return INVALID_INPUT_EXCEPTION;
    return NO_EXCEPTION;
}

int Labwork6::Task5InputArrayElement(int& N)
{
    cout << "Input array element: ";
    cin >> N;

    return NO_EXCEPTION;
}

int Labwork6::Task5Parse(int* array, int length)
{
    cout << "Number of elements larger than their left neighbour: " << length << endl;

    ArrayUtil::ConsoleLog<int>(array, length);

    return NO_EXCEPTION;
}

int Labwork6::Task5CleanMemory(int* array, int* resultArray)
{
    delete[] array;
    delete[] resultArray;

    return NO_EXCEPTION;
}

int* Labwork6::Task5(int* array, int length, int& outK) {
    outK = 0;
    
    for (int i = 1; i < length; i++) {
        if (array[i] > array[i-1])
            outK++;
    }

    int* result = new int[outK];
    int resultCounter = 0;

    for (int i = 1; i < length; i++) {
        if (array[i] > array[i - 1])
            result[resultCounter++] = i + 1;
    }

    return result;
}