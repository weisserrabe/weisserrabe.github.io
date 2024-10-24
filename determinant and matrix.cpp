#include <iostream>
#include <vector> // WE USE VECTOR TO DESCRIPE THE DETERMINANT OR MATRIX;

int main()
{
    int m,n,i,j;
    std::cout << "please ensure the size of the matrix or determinant (m * n)" << std::endl;
    std::cin >> m >> n ; //read the size
    
    std::vector <std::vector <int> > a(m+1,std::vector<int>(n+1));   //attention!!! c++ vectors are zero-based!!! it start from zero,so we must plus 1 to meet the programe in mathematics
     
    std::cout <<"please enter the elements of the matrix or determinant:" << std::endl;

    for (i=1; i <= m ; i++)
    {
        for (j=1; j<= n;j++)
        {
            std::cin >> a[i][j];
        }
    }

    std::cout <<"the matrix or determinant is"<< std::endl;

    for (i=1; i <= m ; i++)
    {
        for (j=1; j<= n; j++)
        {
            std::cout << a[i][j] <<" ";
            //std::cout << i << j;
        }
        std::cout << std::endl;
    }
    return 0;
} 
