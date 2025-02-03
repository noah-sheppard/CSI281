#ifndef AUTOPART_H
#define AUTOPART_H

#include <string>
using namespace std;

struct AutoPart {
    int partID;
    string partName;
    string category;
    double price;
};

int getMaxPrice(AutoPart arr[], int n);
int getMaxPartID(AutoPart arr[], int n);
void countSort(AutoPart arr[], int n, int exp, bool sortByPrice, bool descending);
void radixSort(AutoPart arr[], int n, bool sortByPrice, bool descending);
AutoPart searchByID(AutoPart arr[], int n, int partID);
void displayByCategory(AutoPart arr[], int n, string category);
void print(AutoPart arr[], int n);

#endif
