/*
 A car dealership has 10 salespeople. The dealership keeps track of the number of cars sold by each
 salesperson each month and reports it to management. The management then takes that data and assigns a
 number 1 – 10 to each salesperson. The following statement declares an array to store the number of
 cars sold by each salesperson:
 
 int cars[10];
 
 Write a program to save the number of cars sold by each salesperson in the array named cars. Output:
 1) The total number of cars sold at the entire dealership.
 2) Which salesperson sold the most cars (Salesperson #1 or Salesperson #2, etc.) and how many cars that best salesperson sold.
 */

#include <iostream>
using namespace std;

int main() {
   
    int cars[10];
    int total = 0;
    int limit = 0;
    int winner;
    
    for (int i = 0; i < 10; i++){
        
        cout << "Enter total car sales for salesperson #" << i + 1 << ':' << endl;
        cin >> cars[i];
        total+= cars[i];
        
        if (cars[i] > limit){
            limit = cars[i];
            winner = i+1;
        }
        
    }
    
    cout << "Salesman #" << winner << " sold the most cars: " << limit << endl;
    
    return 0;
}

//OUTPUT
/*
 Enter total car sales for salesperson #1:
 5
 Enter total car sales for salesperson #2:
 10
 Enter total car sales for salesperson #3:
 11
 Enter total car sales for salesperson #4:
 6
 Enter total car sales for salesperson #5:
 6
 Enter total car sales for salesperson #6:
 3
 Enter total car sales for salesperson #7:
 4
 Enter total car sales for salesperson #8:
 2
 Enter total car sales for salesperson #9:
 3
 Enter total car sales for salesperson #10:
 5
 Salesman #3 sold the most cars: 11
 Program ended with exit code: 0
 */
