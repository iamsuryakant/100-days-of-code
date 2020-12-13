#include <iostream>

using namespace std;

int main()
{
    string str="Suryakant Thakur";

    int vowel = 0, space = 0, consonant= 0;

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='A'|| str[i]=='E'||str[i]=='I'||str[i]=='O'|| str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            vowel++;
        }
        else if(str[i]==' ')
        {
            space++;
        }
        else
            consonant++;
    }
    cout<<"vowels "<<vowel<<endl;
	cout<<"consonant "<<consonant<<endl;
	cout<<"words "<<space++<<endl;
    return 0;
}
