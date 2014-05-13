#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <cstring>

using namespace std;

bool areAdjacent(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
        if (y1 == y2 && y2 == y3 && y3 == y4 && x1 + 1 == x2) {
            if ((x2 + 1 == x3) && (x3 + 1 == x4)) {
                return true;
            } else {
                return false;
            }
        }
        if (x1 == x2 && x2 == x3 && x3 == x4 && y1 + 1 == y2) {
            if ((y2 +1 == y3) && (y3 + 1 == y4)) {
                return true;
            } else {
                return false;
            }
        }
        if ((y1 + 1) == y2 && (x1 + 1) == x2) {
            if ((y2 + 1 == y3) && (y3 + 1 == y4)) {
                if ((x2 + 1) == x3 && (x3 + 1) == x4) {
                    return true;                }
            } else {
               return false;
            }
        }
        if ((y1 + 1) == y2 && (x1 - 1) == x2) {
            if ((y2 + 1 == y3) && (y3 + 1 == y4)) {
                if ((x2 - 1) == x3 && (x3 - 1) == x4) {
                    return true;                   
                }
            } else {
               return false;
            }
        }

       return false;
} 

int main() {
    int numarray[20][20];
    string array;
    ifstream arrayfile;
    arrayfile.open("./array");
    if (arrayfile.is_open()) {
     int y = 0, x = 0;
     cout << "\t\t";
     for (int i = 1; i < 21; i++) {
         cout << i << "\t";
     }
     cout << endl << "--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
     cout << endl << y << "\t|" << "\t";

     while(!arrayfile.eof()) {
        arrayfile >> array;
        numarray[x][y] = atoi(array.c_str());
        cout << numarray[x][y] << "\t";
        x++;
        if (x == 20) {
            x = 0;
            y++;
            if (y == 20)
                break;
            cout << endl << "\t|" << endl << y + 1 << "\t|"  << "\t";
        }
     }
    }
    cout << endl << endl;
    arrayfile.close();

    int y1 = 0, y2 = 0, y3 = 0, y4 = 0, highest = 0, now = 0, x = 0;
    for (int x1 = 0; x1 < 20; x1++) {
        y2 = y1;
        for (int x2 = x1 + 1; x2 < 20; x2++) {
            y3 = y2;
           for (int x3 = x2 + 1; x3 < 20; x3++) {
               y4 = y3;
               for (int x4 = x3 + 1; x4 < 20; x4++) {
                   if (areAdjacent(x1, y1, x2, y2, x3, y3, x4, y4)) {
                        now = numarray[x1][y1] * numarray[x2][y2] * numarray[x3][y3] * numarray[x4][y4];
                        if (now > highest) {
                           cout << endl << x1 << "\t" << y1 << endl << x2 << "\t" << y2 << endl << x3 << "\t" << y3 << endl << x4 << "\t" << y4 << endl << now << endl; 
                            highest = now;
                        }                  
                        if (y1 ==0 && y2 == 1 && y3 == 2 && y4 == 3) {
                        }
                      
                   }
                   if (x4 == 19) {
                       x4 = 0;
                           // cout << "Dat wel" << endl;
                       y4++;
                       if (y4 == 20) {
                           break;
                       }
                   }
              
               }

               if (x3 == 19) {
                   x3 = 0;
                   y3++;
                   if (y3 == 20) {
                       break;
                   }
               }
           }
           
           if (x2 == 19) {
               x2 = 0;
               y2++;
               if (y2 == 20) {
                   break;
               }
           }
        }

        if (x1 == 19) {
            x1 = 0;
            y1++;
            if (y1 == 20) {
                break;
            }
        }
    }
    cout << endl << highest << endl;
    
    //cout << print2DIntArray(numarray) << endl;
}
