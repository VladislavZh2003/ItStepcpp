# include <iostream>
using namespace std;

int main()
{
	int *p[3] = {
	{10,11,12},
	{3,5,6,7,8},
	{13,5,6,8}
	};
	//obhozhdane?

	int x[2][3] = {
	{2, 3, 4}, // 1st row
	{8, 9, 10} // 2nd row
	};
	
	cout<<"------------------------"<<endl;
	
	const int MAX = 3;
	int  var[MAX] = {10, 100, 200};
	int  *ptr;// let us have array address in pointer.
    ptr = var;
    for (int i = 0; i < MAX; i++) 
    {
      	cout << "Address of var[" << i << "] = ";
      	cout << ptr << endl;

      	cout << "Value of var[" << i << "] = ";
      	cout << *ptr << endl;// point to the next location
    	ptr++;
	}
	
	cout<<"------------------------"<<endl;
	
    float num, average, sum = 0.0;
    int i, n;

    cout << "Maximum number of inputs: ";
    cin >> n;

    for(i = 1; i <= n; ++i)
    {
        cout << "Enter n" << i << ": ";
        cin >> num;
        
        if(num < 0.0)
        {
           goto jump;
        } 
        sum += num;
    }
    
	jump:
		
    average = sum / (i - 1);
    cout << "\nAverage = " << average<<endl;
    
    cout<<"------------------------"<<endl;
    
    int score = 5;
    int *scorePtr;
    scorePtr = &score;
    cout << scorePtr << endl;
    
    return 0;
}
