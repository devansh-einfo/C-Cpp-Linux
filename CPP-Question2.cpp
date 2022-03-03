#include <iostream>

using namespace std;
const int rows=2,cols=2;

class Matrix{
    
   
    int a[rows][cols];
    int b[rows][cols];
    int temp[rows][cols];
    public:
    
        void read()
        {
            for(int i=0;i<rows;i++)
                for(int j=0;j<cols;j++)
                {
                    cout << "Enter Element [" << i << "][" << j << "]";
                    cin >> a[i][j];
                }
        }
        
        void show();
        void transpose();
        Matrix add(Matrix &b);
        Matrix multi();
};

void Matrix :: show(){
     for(int i=0;i<rows;i++){
                for(int j=0;j<cols;j++)
                {
                    cout << a[i][j] << "\t";
                    
                }
                cout << endl;
     }
}

void Matrix :: transpose()
{
    int temp;
    for(int i=0;i<rows;i++)
    {
        for(int j=i+1; j<cols;j++)
        {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
}

Matrix Matrix :: add(Matrix &b)
{
    Matrix c;
    for(int i=0;i<rows;i++)
    {
        for(int j=0; j<cols;j++)
        {
            c.a[i][j] = a[i][j] + b.a[i][j];
        }
    }
    return c;
    
}

Matrix Matrix :: multi()
{
   //Matrix temp;
 
   for(int i=0;i<rows;i++)
    {
        for(int j=0; j<cols;j++)
        {
            temp[i][j] = 0;
            for(int k=0;k<cols;k++)
            {
            temp[i][j] += a[i][k] * b[k][j];
            }
        }
        return temp;
    }
}

int main()
{
    Matrix a,b,c;
    a.read(); b.read();
    c = a.add(b);
    cout<<"add marix is "<< endl;
    c.show();
    c.transpose();
    cout << "Transpose is " << endl;
    c.show();
    c.multi();
    cout << "multy is :" << endl;
    
    

    return 0;
}