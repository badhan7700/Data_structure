//Substring

#include<iostream>
using namespace std;

string sub_str(string str , int pos, int lgh);

int main()
{
    string str , sub;
    int pos, lgh;
    cout << "Enter any string: ";
    getline(cin,str);
    cout << "Enter the substring position: ";
    cin >> pos;
    cout << "Enter the substring length: ";
    cin >> lgh;

    cout<< "\nThe main string is: " << str ;

    cout<< "\nThe Sub string is: " << sub_str(str ,pos ,lgh)<< endl;


}

string sub_str(string str , int pos, int lgh)
{
    string sub=" ";
    for(int i=pos; i<(pos+lgh) ; i++)
    {
        sub=sub+str[i];
    }

    return sub;
}
