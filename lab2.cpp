
//This program draws a house by printing characters
//to the screen.
//Must include all of below for solutions
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;
/* Excercise 3*/
void ProcessTests(vector<int>, float*, float*, float* );

int main() {
    float highest,         //the highest score in the file
        lowest,          //the lowest score in the file
        average;         //the average score in the file
   // ifstream  datafile;        //an input file stream object
    vector<int> num;
    string line;

    //open the data file
    ifstream datafile("lab2_p3.txt");
    while ( getline (datafile, line)) {
        num.push_back( std::stoi(line));

    }
    ProcessTests(num, &highest, &lowest, &average);
   // cout << num.size();
   // cout << highest;

    // fill in the activation statement for function "ProcessTests" here

    cout << "The highest score is " << highest << endl;
    cout << "The lowest score is " << lowest << endl;
    cout << "The average score is " << average << endl;

    datafile.close();
    return 0;
}

void ProcessTests(vector<int> scores, float *highest, float *lowest, float *average )
{
    float sum = 0;
     *highest =  *max_element(scores.begin(), scores.end());
     *lowest = *min_element(scores.begin(), scores.end());
     for (int i = 0; i < scores.size(); i++)
     {
         sum += scores[i];
     }
     *average = sum / scores.size();
}
/* Excercise 3 END*/





// declare all function prototypes here

/** Excercise1  */
void PrintParallel();
void PrintIntersecting();      //draw the roof
void PrintHorizontal();        //draw the base of the roof
void PrintParallel();          //draw the sides of the house
void PrintHorizontal();
void printStarz();
void printExample2();
int main()
{
    PrintIntersecting();      //draw the roof
    PrintHorizontal();        //draw the base of the roof
    PrintParallel();          //draw the sides of the house
    PrintHorizontal();        //draw the base of the house
    printExample2();

    return 0;
}


// function : PrintParallel()
// Print out two parallel lines

void PrintParallel()
{
    cout << "|        |" << endl;
    cout << "|        |" << endl;
    cout << "|        |" << endl;
    cout << "|        |" << endl;
    cout << "|        |" << endl;
    return;
}


// function : PrintIntersecting()
// Print out two intersecting lines

void PrintIntersecting()
{
    cout << "     $     " << endl;
    cout << "    $ $    " << endl;
    cout << "   $   $   " << endl;
    cout << "  $     $  " << endl;
    cout << " $       $ " << endl;
    return;
}


// function : PrintHorizontal()
// Print out a horizontal line

void PrintHorizontal()
{
    cout << "-----------" << endl;
    return;
}

void printStarz() {
    cout << "      *      " << endl;
    cout << "   *     *   " << endl;
    cout << "*           *" << endl;
    cout << "*           *" << endl;
    cout << "*           *" << endl;
    cout << "   *     *   " << endl;
    cout << "      *      " << endl;


}

void printExample2() {
     printStarz();
     PrintHorizontal();        //draw the base of the roof
     PrintParallel();          //draw the sides of the house
     PrintHorizontal();
    PrintIntersecting();
}

/* End of Excercise 1 */









/*                Excercise 2            */
void DrawTriangle(int, char);
int main() {
    //local variables
    int height;          //the height of the triangle
    char character;      //the character used in drawing the triangle
    int stop = 1;

    //loop to continue processing triangles until the user
    //type the end-of-file character.
    while (stop > 0)
    {

        cout << "Enter the height of the triangle. ";
        cout << "Enter the end-of-file character to quit. " << endl;
        cin >> height;
        if (height == 0) {
            return 0;
        }
        cout << "Enter the character used to draw the triangle. ";
        cout << "Enter the end-of-file character to quit. " << endl;
        cin >> character;
        if (character == NULL) {
            return 0;
        }
        DrawTriangle(height, character);
        cout << "Should we draw a next one? Negative number to stop. Positive number to contnue. " << endl;
        cin >> stop;
        if (stop < 0) {
            return 0;
        }
    }   //end of while loop
    return 0;
}

void DrawTriangle(int h, char c)
{
    for (int i = 1; i <= h; i++)
    {
        std::string stuff(i, c);
        cout << stuff << endl;
    }

} /*End if Excercise 2*/
