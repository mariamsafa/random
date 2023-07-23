#include <bits/stdc++.h>
using namespace std;
void firstexpression(string str1)
{

    int l = str1.length();
    int count = 0;
    if (l == 3)
    {
        if (str1[0] == 'a' && str1[l - 2] == 'd' && str1[l - 1] == 'e')
        {
            cout << "Valid" << endl;
        }
        else
        {
            cout << "invalid" << endl;
        }
    }
    else
    {
        if (str1[0] == 'a' && str1[l - 2] == 'd' && str1[l - 1] == 'e')
        {
            for (int i = 1; i <= l - 3; i = i + 2)
            {
                if (str1[i] == 'b')
                {
                    if (str1[i + 1] == 'c')
                    {
                        count = 1;
                    }
                    else
                    {
                        count = 0;
                        cout << "invalid" << endl;
                        break;
                    }
                }
                else
                {
                    count = 0;
                    cout << "invalid" << endl;
                    break;
                }
            }
        }
        else
        {
            cout << "invalid" << endl;
            return;
        }

        if (count == 1)
        {
            cout << "valid" << endl;
        }
    }
}
int main()
{
    string str, str2, str3, str4, str5, str6;

    // for first expression (Zero or more) a(bc)*de
    cout << "Enter 1st expression for a(bc)*de : ";
    cin >> str;
    firstexpression(str);

    // for 2nd expression (Zero or more) a(bc)*de
    cout << "Enter the 2nd expression for a(bc)+de : ";
    cin >> str2;
    int l2 = str2.length();
    if (l2 < 5)
    {
        cout << "invalid" << endl;
    }
    else

    {
        if (str2[0] == 'a' && str2[l2 - 2] == 'd' && str2[l2 - 1] == 'e')
        {
            firstexpression(str2);
        }
    }

    // for 3rd expression a(bc)?de
    cout << "Enter the 3rd expression for a(bc)?de : ";
    cin >> str3;
    int l3 = str3.length();
    if (l3 < 3)
    {
        cout << "invalid" << endl;
    }
    else
    {
        if (str3 == "ade" || str3 == "abcde")
        {
            cout << "Valid" << endl;
        }
        else
        {
            cout << "invalid" << endl;
        }
    }

    // for 4th expression [a-m]*
    cout << "Enter the 4th expression for [a-m] :  ";
    cin >> str4;
    int count1 = 0;

    int l4 = str4.length();
    for (int i = 0; i < l4; i++)
    {
        if (str4[i] >= 'a' && str4[i] <= 'm')
        {
            count1 = 0;
        }
        else
        {

            count1 = 1;
            break;
        }
    }
    if (count1 == 0)
    {
        cout << "valid" << endl;
    }
    else
    {
        cout << "invalid" << endl;
    }

    // for 5th expression negation [^aejou]
    cout << "Enter the 5th expression for negation [^aejou] : ";
    cin >> str5;
    int l5 = str5.length();
    int count3 = 0;
    for (int i = 0; i < l5; i++)
    {
        if (str5[i] == 'a' || str5[i] == 'e' || str5[i] == 'j' || str5[i] == 'o' || str5[i] == 'u')
        {
            cout << "invalid" << endl;
            break;
        }
        else
        {
            count3++;
        }
    }
    if (count3 == l5)
    {
        cout << "Valid" << endl;
    }

    // for 6th expression {6}
    cout << "Enter the 6th expression for exactly n times [^aejou]{6} :  ";
    cin >> str6;
    int l6 = str6.length();
    if (l6 < 6)
    {
        cout << "valid" << endl;
    }
    else
    {
        cout << "invalid" << endl;
    }
    return 0;
}
