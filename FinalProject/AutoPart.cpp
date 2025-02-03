#include "AutoPart.h"
#include <iostream>

int getMaxPrice(AutoPart arr[], int n) {
    double mx = arr[0].price;
    for (int i = 1; i < n; i++) {
        if (arr[i].price > mx) {
            mx = arr[i].price;
        }
    }
    return (int)mx;
}

int getMaxPartID(AutoPart arr[], int n) {
    int mx = arr[0].partID;
    for (int i = 1; i < n; i++) {
        if (arr[i].partID > mx) {
            mx = arr[i].partID;
        }
    }
    return mx;
}

void countSort(AutoPart arr[], int n, int exp, bool sortByPrice, bool descending) {
    AutoPart output[n];
    int count[10] = {0};

    for (int i = 0; i < n; i++) {
        int key = sortByPrice ? (int)arr[i].price : arr[i].partID;
        count[(key / exp) % 10]++;
    }

    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    for (int i = n - 1; i >= 0; i--) {
        int key = sortByPrice ? (int)arr[i].price : arr[i].partID;
        output[count[(key / exp) % 10] - 1] = arr[i];
        count[(key / exp) % 10]--;
    }

    if (descending) {
        for (int i = 0; i < n; i++) {
            arr[i] = output[n - 1 - i];
        }
    } else {
        for (int i = 0; i < n; i++) {
            arr[i] = output[i];
        }
    }
}

void radixSort(AutoPart arr[], int n, bool sortByPrice, bool descending) {
    int m = (sortByPrice) ? getMaxPrice(arr, n) : getMaxPartID(arr, n);
    for (int exp = 1; m / exp > 0; exp *= 10) {
        countSort(arr, n, exp, sortByPrice, descending);
    }
}

AutoPart searchByID(AutoPart arr[], int n, int partID) {
    for (int i = 0; i < n; i++) {
        if (arr[i].partID == partID) {
            return arr[i];
        }
    }
    return {-1, "Not Found", "N/A", 0};
}

void displayByCategory(AutoPart arr[], int n, string category) {
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i].category == category) {
            cout << "Part ID: " << arr[i].partID << ", Name: " << arr[i].partName << ", Price: $" << arr[i].price << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "No parts found in category: " << category << endl;
    }
}

void print(AutoPart arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Part ID: " << arr[i].partID << ", Name: " << arr[i].partName << ", Category: " << arr[i].category << ", Price: $" << arr[i].price << endl;
    }
}
