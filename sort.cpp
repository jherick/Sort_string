#include "sort.h"
sort::sort()
{
    //ctor
}
sort::~sort()
{
    //dtor
}


void sort::bubbleSort(string*array, int length){
    int i,j;
    for(i=0;i<length;i++)
    {
        for(j=0;j<i;j++)
        {
            if(array[i]<array[j])
            {
                swap(array[i],array[j]);
            }

        }

    }

}

void sort::insertionSort(string* array,int length){
    int j;
    string key;
    for(int i=1; i<length; i++){
        key = array[i];
        j = i-1;
        while(j>=0 && array[j]>key){
            array[j+1] = array[j];
            j=j-1;
        }
        array[j+1] = key;
    }
}

void sort::load(){
    string line;
    int p=0;

    ifstream myfile;
    myfile.open("top_passwords.txt");
    while(myfile.good()){
        getline(myfile,line);
        name[p]= line;
        p++;
    }
    myfile.close();
}

void sort::sortArray_bubbleSort(){
    sort::bubbleSort(name,100);
    for(int i=0; i<100; i++){
    cout << name[i] << endl;}

}
void sort::sortArray_insertionSort(){
    sort::insertionSort(name,100);
    for(int i=0; i<100; i++){
    cout << name[i] << endl;}
}
