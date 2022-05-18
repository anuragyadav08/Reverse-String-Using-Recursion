
#include <iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int reverse(char str[],int index,int size)
{
    char temp;
    temp=str[index];
    str[index]=str[size-index];
    str[size-index]=temp;
    if(index==size/2)
    {
        return 0;
    }
    reverse(str,index+1,size);
}

int main()
{
    char str[100];
    system("clear");
    cout<<"Enter String :";
    cin>>str;
    int size=strlen(str)-1;
    reverse(str,0,size);
    cout<<"Reverse String :"<<str;
    return 0;
}
