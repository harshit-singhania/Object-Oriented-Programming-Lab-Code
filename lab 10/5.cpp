// count number of characters in file 

#include <iostream>
#include <fstream>
using namespace std; 

int countChars(char *fileName)
{
    char ch;
    int count = 0;
    ifstream fin(fileName);
    while (fin)
    {
        fin.get(ch);
        count++;
    }
    fin.close();
    return count;
}

// count number of wirds in file 

int countWords(char *fileName) {
    char ch;
    int count = 0;
    ifstream fin(fileName);
    while (fin)
    {
        fin.get(ch);
        if (ch == ' ' || ch == '\t' || ch == '\n')
        {
            count++;
        }
    }
    fin.close();
    return count;
}

// count number of lines in file

int countLines(char *fileName) {
    char ch;
    int count = 0;
    ifstream fin(fileName);
    while (fin)
    {
        fin.get(ch);
        if (ch == '\n')
        {
            count++;
        }
    }
    fin.close();
    return count;
}

// count uppercase letters, lowercase letters, digits and special characters in file

int countUpper(char *fileName) {
    char ch;
    int count = 0;
    ifstream fin(fileName);
    while (fin)
    {
        fin.get(ch);
        if (ch >= 'A' && ch <= 'Z')
        {
            count++;
        }
    }
    fin.close();
    return count;
}

int countLower(char *fileName) {
    char ch;
    int count = 0;
    ifstream fin(fileName);
    while (fin)
    {
        fin.get(ch);
        if (ch >= 'a' && ch <= 'z')
        {
            count++;
        }
    }
    fin.close();
    return count;
}

int countDigits(char *fileName) {
    char ch;
    int count = 0;
    ifstream fin(fileName);
    while (fin)
    {
        fin.get(ch);
        if (ch >= '0' && ch <= '9')
        {
            count++;
        }
    }
    fin.close();
    return count;
}

int countSpecial(char *fileName) {
    char ch;
    int count = 0;
    ifstream fin(fileName);
    while (fin)
    {
        fin.get(ch);
        if (ch >= '!' && ch <= '/')
        {
            count++;
        }
    }
    fin.close();
    return count;
}

int main(void)
{
    char ch;
    int count = 0;
    ifstream fin("dummy1.txt");
    while (fin)
    {
        fin.get(ch);
        cout << ch;
    }
    fin.close();
    cout << "Number of characters: " << countChars("dummy1.txt") << endl;
    cout << "Number of words: " << countWords("dummy1.txt") << endl;
    cout << "Number of lines: " << countLines("dummy1.txt") << endl;
    cout << "Number of uppercase letters: " << countUpper("dummy1.txt") << endl;
    cout << "Number of lowercase letters: " << countLower("dummy1.txt") << endl;
    cout << "Number of digits: " << countDigits("dummy1.txt") << endl;
    cout << "Number of special characters: " << countSpecial("dummy1.txt") << endl;
    return 0;
}

