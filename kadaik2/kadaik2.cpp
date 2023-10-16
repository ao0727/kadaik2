#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
#include <vector>

//Q.8
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//Q.9
void fisherYatesShuffle(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        std::swap(arr[i], arr[j]);
    }
}




int main() {
   
    //Q.1
    //double newYearMoney = 5000.0; 
    //cout << "今年のお年玉: \u00A5 " << newYearMoney << endl;



    //Q.6
    /*
    int numStudents;
    cout << "何名入力";
    cin >> numStudents;

    
    int* scores = new int[numStudents];

  
    for (int i = 0; i < numStudents; i++) {
        cout << i + 1 << "人目を入力";
        cin >> scores[i];
    }

    
    int total = 0;
    for (int i = 0; i < numStudents; i++) {
        total += scores[i];
    }

    
    double average = static_cast<double>(total) / numStudents;

    
    cout << average << endl;

    
    delete[] scores;*/


    //Q.8

    int arraySize;

 
    cout << "配列のサイズを入力してください: ";
    cin >> arraySize;

    
    srand(static_cast<unsigned>(time(0));

    
    int* randomArray = new int[arraySize];
    for (int i = 0; i < arraySize; i++) {
        randomArray[i] = rand() % 99 + 1; 
    }

  
    cout << "ソート前 ";
    for (int i = 0; i < arraySize; i++) {
        cout << randomArray[i] << " ";
    }
    cout << std::endl;

    
    bubbleSort(randomArray, arraySize);

    
    cout << "バブルソート後 ";
    for (int i = 0; i < arraySize; i++) {
        cout << randomArray[i] << " ";
    }
    cout << std::endl;

    // メモリの解放
    delete[] randomArray;


    //Q.9
    vector<int> numbers;
    for (int i = 1; i <= 99; i++) {
        numbers.push_back(i);
    }

   
    srand(static_cast<unsigned>(time(0)));

    
    cout << "シャッフル前 ";
    for (int num : numbers) {
        cout << num << " ";
    }
    std::cout << std::endl;

    
    fisherYatesShuffle(numbers);

    
    cout << "シャッフル後 ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;








 
}
