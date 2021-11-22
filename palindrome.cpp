#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

std::string revstr(std::string str)
{
    std::string rev = "";
    int len = str.length();

    for (int i = len - 1; i >= 0; i--)
    {
        rev = rev + str[i];
    }

    if ((rev.compare(str)) == 0)
    {
        std::cout << "\nIt is palindrome";
    }
    else
    {
        std::cout << "\nIt is not a palindrome";
    }

    return rev;
}

int main()
{
    std::string str;
    std::cout << "Enter string to check ";
    std::cin >> str;

    revstr(str);

    return 0;
}