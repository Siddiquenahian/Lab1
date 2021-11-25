
#include<iostream>
#include<string.h>
#include "stdio.h"

using namespace std;
void main()
{
    string s;
    char str[100];
    int i=0, length, j;
    cout <<"Enter a string: ";
    getline(cin, s, '*');
    gets(str);
    length=strlen(str);

    for(i=0; i<length; i++){
        if(str[i]==' '){
            for(j=i; j<length; j++)
                str[j]=str[j+1];
            length--;
            }

        }
        cout << ' ' << str;

    }
