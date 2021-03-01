#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
using namespace std;
using namespace std::chrono;

void func1() {
    const char * output = "Hello, World!";
    cout << output;
}

void func2(int c) {
    if (c < 0)
    {
        cout << "Number passed is not non negative number";
    }
    else {
        for (int i = 1; i <= c; i++)
        {
            cout << "Hello, World!";
        }
    }
}

void func3() {
   /* int arg1; arg1 = -1;
    int x, y, z;
    char myDouble = '5';
    char arg1 = 'A';
    cout << arg1 << endl;
    //return 0;*/
}
// Skipped to number 7
void func7() {
    vector<int> numlist;
    int sum = 0;
    int num = 0;
    cout << "Enter numbers in list(-1->Exit): ";
    cin >> num;

    while (num != -1)
    {
        numlist.push_back(num);
        cout << "Enter numbers in list(-1->Exit): ";
        cin >> num;
    }
    int maxelm = *max_element(numlist.begin(), numlist.end());
    int minelm = *min_element(numlist.begin(), numlist.end());
    for (int i = 0; i < numlist.size(); i++)
    {
        sum += numlist[i];
    }
    cout << "Max element: " << maxelm << "\n";
    cout << "Min element: " << minelm << "\n";
    cout << "Range: " << minelm << " --> " << maxelm << "("<<maxelm-minelm<< ")" <<endl;
    cout << "Mean: " << sum / numlist.size();
}

void PrimeNumbers(int N) {
    int i = 2; //prime numbers start at 2
    int num, cou;
    vector<int> Pnums; //used to store number prime numbers already found
    while (Pnums.size() < N) {
        if (i == 2) {
            Pnums.push_back(2); //stores 2 as first prime
            cout << i << " ";
            i += 1;
            continue; //skips rest ofcode in loop
        }
        num = i; //stores current number in loop

        cou = 0;
        while (num > 0) { //loop check number of divisibles and decrements in 2
            if (i % num == 0) {//because other than 2 only odd numbers are primes
                cou++;
            }
            num-=2;
            if (cou > 2)
                break;//used for speed
        }
        if (cou == 2) {
            cout << i << " "; //print prime number if number only has 2 divisibles
            Pnums.push_back(i);
        }
        i += 2;
    }

}

int func9(int N) {
    /*
    cin >> N; //can be used for user input but function would be void
    */
    while (1==1)
    {
        cout << (N % 5 == 0) ? (N / 5) : -1;
        cin >> N;
    }
}
void func92() {
    int N;

    while (1 == 1) {
        cout << "enter(-1 to exit): ";
        cin >> N;
        if (N == -1) {
            cout << "Goodbye!";
            return;
        }
        if (N % 5 != 0) {//if true skips rest of code in loop
            continue;
        }
        cout << N << "/5 = "<<N / 5 << endl;
    }
}


int main()
{/*
    auto start = high_resolution_clock::now();
    func8(100);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);// test function speed
    cout << endl<<duration.count() << endl; */
    PrimeNumbers(1000); //first 1000 prime numbers
    return 0;
}
