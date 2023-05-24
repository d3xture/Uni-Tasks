//code no 01
 #include <iostream>
 using namespace std;
 int main()
 {
     int urdu = 60;
     int maths = 70;
     int english = 72;
     int science = 69;
     int islamiyat = 90;
     int programming = 40;
      cout << "Your DMC"<<endl;
      cout << "Urdu: "<<urdu<<endl;
      cout << "Maths: "<<maths<<endl;
      cout << "English: "<<english<<endl;
      cout << "Science: "<<science<<endl;
      cout << "Islamiyat: "<<islamiyat<<endl;
      cout << "Programming: "<<programming<<endl;

return 0;

}

//code no 2:
#include <iostream>
using namespace std;
int marks [] = {60,70,72,69,90,40};
int main()
{
    cout << "Your DMC"<<endl;
    cout << "Urdu: "<<marks[0]<<endl;
    cout << "Maths : "<<marks[1]<<endl;
    cout << "English: "<<marks[2]<<endl;
    cout << "Science: "<<marks[3]<<endl;
    cout << "Islamiyat: "<<marks[4]<<endl;
    cout << "Programming: "<<marks[5]<<endl;

return 0;
}

//code no 03
 #include <iostream>
 using namespace std;
 int marks [] = {60,70,72,69,90,40};
 int main()
 {
     for (int i=0; i<=5; i++) {
         cout << "Marks: " << marks[i] << endl;
     }

return 0;
}

// Code no 04
 #include <iostream>
 using namespace std;
 int main()
 {
     int nos[] = {1, 2, 5, 6, 9, 7};
     cout << "Printing all numbers: " << endl;
     cout << nos[0]<<endl;
     cout << nos[1]<<endl;
     cout << nos[2]<<endl;
     cout << nos[3]<<endl;
     cout << nos[4]<<endl;
     cout << nos[5]<<endl;

return 0;
}

//CODE no 05
#include <iostream>
using namespace std;
int main(){
int nos [] = {1,2,5,6,9,7};
cout << "Printing all the numbers: " << endl;
for(int i = 0; i < 6; i++){
    cout << nos[i] << endl;

}
return 0;
}

//CODE NO 06
 #include <iostream>
 using namespace std;

int main()
{
    int nos[] = {12, 4, 5, 9, 7};

    for (int i = 0; i < 5; i++) {
        cout << nos[i] << "\t";
    }
    cout << endl;
    cout << "----------------------------------" << endl;

    return 0;
}

// CODE NO 07
#include <iostream>
using namespace std;

int main()
{
    int k = 5;
    int nos[] = {12, 4, 5, 9, 7};

    for (int i = 0; i < 5; i++)
    {
        cout << nos[i] * k << "\t";
    }
    cout << endl;
    cout << "----------------------------------" << endl;
}

// code no 08  *Repetition*
#include <iostream>
using namespace std;

int main()
{
    int nos[6] = {12, 4, 5, 9, 7};

    cout << "Enter 6 numbers: " << endl;
    cin >> nos[0];
    cin >> nos[1];
    cin >> nos[2];
    cin >> nos[3];
    cin >> nos[4];
    cin >> nos[5];

    return 0;
}

//Code no 08 *To Avoid Repetition*

#include <iostream>
using namespace std;

int main()
{
    int nos[6] = {12, 4, 5, 9, 7};
    cout << "Enter 6 numbers: " << endl;
    for (int i = 0; i < 6; i++)
    {
        cin >> nos[i];
    }

    return 0;
}
