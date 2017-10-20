#include<vector>
#include<string>
#include<iostream>
using namespace std;
int main()
{
int rows;
int cols;
vector < vector<char> > stars;
cout<<"Enter rows and columns of stars:"<<endl;
cin>>rows;
cin>>cols; 
    if(rows > 0 && cols > 0)
    {
        stars.resize(rows);
        for(int r = 0; r < rows; r++)
        {
            stars[r].resize(cols);
        }
        for(int r = 0; r < stars.size();r++)
        {
            for(int c = 0; c < stars[r].size(); c++)
            {
                stars[r][c] = '*';
                cout<<stars[r][c];
            }
            cout<<endl;
        }
    }    
return 0;
}
