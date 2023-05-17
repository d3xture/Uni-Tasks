#include<iostream>
using namespace std;
/funciton prototype
int GetNextNo(int n) //defination
{
	return n+1;
}
int main()
{
	int n = 5;
	int next = GetNextNo(n); //call
	cout<<next;
}


int GetNextNO(int); // we must have to put semi-colon at the end.
		   // declaration
main(){
	int n = 5;
	int next = GetNextNo(n); // This only tells this function is gonna come!!
	cout<<next;
}
int GetNExtNo(int n)
{
	return n+1;
}

//example
int main(){
	for ( int i = 0; i<10; i++);
}
//int main()
//{
//	int x = 4, y = 5;
//	cout<< max (x,y);
//	flot a  = 4.5, b = 5.5;
//	cout<<max (a,b);
//}
//float max(float a. float b)
//{
//	if(a<b)
//	return a;
//	else()
//	return b;
//}
//int max( int x, int y)
//{
//	if (x>y)
//	return x;
//	else
//	return y;
//}
//int GiveMeANo();
//float GiveMeANo();
////abmbiguity example
//int main()
//{
//	cout<<GiveMeANo(); //if we call the function it will get confused which function to be called
//			   //either fuction 1 or 2. because the signatures are same
//			   // Signature - name and arguments
//			   // signature has to be different
//}
//int GiveMeANo()
//{
//	return 10;
//}
//float GiveMeANo(){
//	return 5.5;
//}

//Pasing Values to the fuction
// "PASS BY VALUE"
void increament(int b)
{
	a++;
	cout<<a;////if we call 'a' from here it will print 6
}
int main(){
	int a = 5;
increament (a);//from main to void it passing the value 5
//cout<<a;     //if we call 'a' from here it will print 5
//cout<<b;     //scope has to be declared! or it will throw error		
}
