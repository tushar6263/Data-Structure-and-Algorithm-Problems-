#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    //-----------------------Pattern1-----------------------------
    // int value = 1;
    // for (int row = 1; row <= n; row++){

    //     for(int col = 1; col<=n;col++){
    //         char ch = 'A'+ row +col-2;
    //         cout<<ch<<" ";
    //     }
    //     cout<<endl;
    // }

    //-----------------------Pattern2-----------------------------
    // int value = 1;
    // for (int row = 1; row <= n; row++){

    //     for(int col = 1; col<=row;col++){
    //         char ch = 'A'+ row-1;
    //         cout<<ch<<" ";
    //     }
    //     cout<<endl;
    // }

    //-----------------------Pattern3-----------------------------
    //  int row= 1;
    //  while(row<=n){
    //     int col = 1;
    //     while (col<=row)
    //     {
    //         char ch = 'A'+ row + col-2;
    //         cout<<ch<<" ";
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;

    //  }

    //-----------------------Pattern 4-----------------------------
    //  int row= 1;
    //  while(row<=n){
    //     int col = 1;
    //     while (col<=row)
    //     {
    //         char ch = 'A'- row + col+3;
    //         cout<<ch<<" ";
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;

    //  }

    //-----------------------Pattern 5-----------------------------
    //     int row = 1;
    //     while (row <= n)
    //     {
    //         int col = 1;
    //         int space = n - row;
    //         while (space)
    //         {
    //             cout << " ";
    //             space = space - 1;
    //         }
    //         while (col <= row)
    //         {
    //             cout << "*";
    //             col++;
    //         }

    //         cout << endl;
    //         row++;
    //     }

    //-----------------------Pattern 6-----------------------------
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <=n-i+1; j++)
    //     {
    //         cout<<"*"<<" ";
    //     }
        
    //     cout<<endl;
    // }


    //-----------------------Pattern 7-----------------------------
//         for(int i=1; i<=n;i++){
//             int space = 0;
//             for(int k=1;k<i;k++){
//                 cout<<" ";
//             }
//             for(int j=1; j<=n-i+1;j++){
//                 cout<<"*";
//             }
//             cout<<endl;
//         }
   

    //-----------------------Pattern 8-----------------------------
        // for(int i=1; i<=n;i++){
        //     int space = 0;
        //     for(int k=1;k<i;k++){
        //         cout<<" ";
        //     }
        //     for(int j=1; j<=n-i+1;j++){
        //         cout<<i+j-1;
        //     }
        //     cout<<endl;
        // }
   

//-----------------------Pattern 9-----------------------------
// int row = 1;
//     while (row <= n)
//     {
//         int col = 1;
//         int space = n - row;
//         while (space)
//         {
//             cout << " ";
//             space = space - 1;
//         }
//         while (col <= row)
//         {
//             cout << row+col-1;
//             col++;
//         }

//         cout << endl;
//         row++;
//     }
//-----------------------Pattern 10-----------------------------
// int row = 1;
//     while (row <= n)
//     {
//         int col = 1;
//         int space = n - row;
//         while (space)
//         {
//             cout << " ";
//             space = space - 1;
//         }
//         while (col <= row)
//         {
//               cout << col;

//             col++;
//         }
//         cout << endl;
//         row++;
      
//     }


//-----------------------Pattern 11-----------------------------
// int row =1; 
// while(row <=n){
//   //Print Karo space (1st triangle)
//   int space = n- row;
//   while (space)
//   {
//     cout<<" ";
//     space =  space-1;
//   }

//   //print 2nd triangle
//   int j =1;
//   while (j<=row)
//   {
//     cout<<j;
//     j =j+1;
//   }
//   //print 3rd triangle
//   int start = row -1;
//   while (start)
//   {
//     cout<<start;
//     start = start-1;
//   }

//   cout<<endl;
//   row = row +1;
  
  
//   }

//--------------------------------Pattern 12--------------------------------
int row =1;

while (row<=n)
{
  int col =1;
  while (col<=n-row+1)
  {
    cout<<col;
    col=col+1;
  }
  int star1=row-1;
  while (star1)
  {
    cout<<'*';
    star1=star1-1;
  }
  int star2=row-1;
  while (star2)
  {
    cout<<'*';
    star2=star2-1;
  }
  int cols=1;
  while (cols<=n-row+1)
  {
    cout<<n-row-cols+2;
    cols=cols+1;
  } 
cout<<endl;
row = row+1;
}

}