#ifndef LABWORK6_H_
#define LABWORK6_H_

class Labwork6 {
public:
	static int RunTasks();
	static int RunTask(int taskNumber);

private:
	static int TaskSelection();
	static int TaskSelection(int taskNumber);
	static int TaskSelectionInputHandling(int& taskNumber);
	static int TaskSelectionInputTaskNumber(int& taskNumber);

private:
	static int Task1main();
	static int Task1Smain();
	static int Task1InputHandling(int& length);
	static int Task1InputLength(int& length);
	static int Task1Parse(int* array, int length);
	static int Task1CleanMemory(int* resultArray);
public:
	static int* Task1();
	static int* Task1(int length);


private:
	static int Task2main();
	static int Task2InputHandling(int*& array, int& length);
	static int Task2InputLength(int& length);
	static int Task2InputArrayElement(int& N);
	static int Task2Parse(int* array, int length);
	static int Task2CleanMemory(int* array, int* resultArray);
public:
	static int* Task2(int* array, int length, int& outK);

private:
	static int Task3main();
	static int Task3InputHandling(int*& array, int& length, int& K);
	static int Task3InputLength(int& length);
	static int Task3InputArrayElement(int& N);
	static int Task3InputK(int& K);
	static int Task3Parse(int* array, int length);
	static int Task3CleanMemory(int* array, int* resultArray);
public:
	static int* Task3(int* array, int length, int K);

private:
	static int Task4main();
	static int Task4InputHandling(int*& array, int& length);
	static int Task4InputLength(int& length);
	static int Task4InputArrayElement(int& N);
	static int Task4Parse(bool result);
	static int Task4CleanMemory(int* array);
public:
	static double Task4(int* array, int length);

private:
	static int Task5main();
	static int Task5InputHandling(int*& array, int& length);
	static int Task5InputLength(int& length);
	static int Task5InputArrayElement(int& N);
	static int Task5Parse(int* array, int length);
	static int Task5CleanMemory(int* array, int* resultArray);
public:
	static int* Task5(int* array, int length, int& outK);
};

#endif
