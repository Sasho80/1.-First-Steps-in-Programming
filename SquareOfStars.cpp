#include <iostream> 
using namespace std;
int main() {
	int n;
	cin>> n;
	for (int i = 1; i <=n; i++) /* Row of asterisks*/{
		cout << "*";
	}
	for (int j = 1; j <=n; j++){
		cout << " ";           /* Empty row */
	}
	cout << endl;
	for (int k = 1; k <=n-2; k++){
		cout << "*";                  /* A row of asterisks and empty spaces*/
		for (int l = 1; l <=n-2; l++){
			cout << " ";               
		}
		cout << "*";
			for (int j = 1; j <= n; j++){
				cout << " ";           /* Empty row */
			}
			cout << endl;
	}
	for (int m = 1; m <= n; m++){
		cout << "*";             /* Row of asterisks*/
	}
	return 0;
}
