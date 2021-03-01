const int MAXROWS=2;
const int MAXCOLS=3;

template <class T>
class Matrix
{
  private:
   T TArray[MAXROWS][MAXCOLS];
   int rows;
   int cols;

  public:
   //Constructor
   Matrix();  //Set rows to MAXROWS and cols to MAXCOLS
	      //Initialize all the values of doubleArray to zero

   //Getter Functions
   void printMatrix();

   //Setter Functions
   void setMatrix(T [][MAXCOLS]); //set the TArray to what is sent
   void addMatrix(T [][MAXCOLS]); //add an array to TArray
   void addMatrix(Matrix otherMatrix);

   //No destructor needed
};
