#ifndef SORT_H
#define SORT_H
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

class sort
{
    public:
        sort();
        virtual ~sort();
        void bubbleSort(string* array ,int length);
        void load();
        void sortArray_bubbleSort();
        void sortArray_insertionSort();
        void insertionSort(string* array,int length);
    protected:
    private:
        string name[100];
};

#endif // SORT_H
