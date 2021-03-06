#include<iostream>
#include<vector>
using namespace std;


void rearrange(int arr[], int n) {
    vector<int> positives, negatives;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0)
            negatives.push_back(arr[i]);
        else
            positives.push_back(arr[i]);
    }

    int pSize = positives.size(), nSize = negatives.size();
    for (int i = 0, j = 0; i < n;) {
        if (j < pSize)
            arr[i++] = positives[j];
        if (j < nSize)
            arr[i++] = negatives[j];
        j++;
    }
}
