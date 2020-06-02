/*Take N (number of rows), print the following pattern (for N = 5)
1
2 2
3 0 3
4 0 0 4
5 0 0 0 5

Input Format
Constraints
0 < N < 100

Output Format
Sample Input
5
Sample Output
1  
2	2  
3	0	3    
4	0	0	4  
5	0	0	0	5
Explanation
Each number is separated from other by a tab.If row number is n (>1), total character is n. First and last character is n and rest are 0.
*/

#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++) {

			if(j==1 || j==i){
				cout<<i<<" ";
			}
			else{
				cout<<"0"<<" ";
			}
		}cout<<"\n";
	}
	return 0;
	}

Each number is separated from other by a tab. For each row total characters is equal to row number itself where first and last character is i(i.e.row number) and rest are 0(i.e middle elements).

Code:

#include<iostream>
using namespace std;

int main() {
    int i, j;
    int n;
    cin >> n;
    //loop for each row
    for (i = 1; i <= n; i++)
    {

           for (j = 1; j <= i; j++)
           {
               if(j==1 || j==i)
                cout << i<<"    ";               // for 1st and last element
               else
                cout << "0"<<"  ";             // for in between elements
           }

        cout << endl;

    }
    return 0;
}

Lang - Java
In Pattern Question, there is a common method which we teach in course viz, taking nsp, nst, csp, cst and row variables.

Pattern Hack: Always first Try to first print pattern by ignoring the value to be printed then accommodate your value in that pattern. For e.g.,
1
2 2
3 0 3
4 0 0 4
5 0 0 0 5

View it as:-


*
* *
* * *
* * * *  
* * * * *
Short Info about the variables:-


1. nsp (number of spaces)-> Number of spaces in very First Line of the pattern.
2. nst (number of stars)-> Number of stars in very first line of the pattern.
3. csp (counter of spaces)-> counter of spaces that will print the required number of spaces and will be initialized with 1 and incremented upto nsp.
4. cst (counter of stars)->  counter of spaces that will print the required number of stars and will be initialized with 1 and incremented upto nst.
5. rows -> It will be initialized with 1 and will go upto the total number of rows in the pattern.
In Given, pattern no spaces are there only stars are present.

Thinking about variables : nst = 1, cst = 1, rows = 1, total rows = n;
Thinking about Value to be printed : row number is to be printed each time at the starting of the row and at the end of the row. So, starting of the row is when out cst is 1 and ending of the row when our cst is nst.

 public static void pattern(int n){

        int rows = 1;
        int nst = 1;

        while(rows <= n){

            int cst = 1;
            while(cst <= nst){

                if(cst == 1 || cst == nst)  // Starting and Ending Position
                 System.out.print(rows+"\t"); //Print Row number
                 else
                 System.out.print(0+"\t"); //Print Zero
                cst++;
            }

            System.out.println();
            rows++;
            nst++;
        }
    }