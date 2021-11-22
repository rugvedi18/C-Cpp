#include <iostream>

// returns max between m and n
int max(int m, int n)
{
    return (m > n) ? m : n;
}

int *add(int poly1[], int poly2[], int m, int n)
{
    int size = max(m, n);
    //declaring array to store sum of 2 poly
    int *sum = new int[size];

    //store elements of poly1 into sum
    for (int i = 0; i < m; i++)
    {
        sum[i] = poly1[i];
    }

    //store elements of array2 into sum
    for (int i = 0; i < n; i++)
    {
        sum[i] += poly2[i];
    }

    return sum;
}

void polyprint(int poly[], int len)
{
    for (int i = 0; i < len; i++)
    {
        std::cout << poly[i];
        if (i != 0)
        {
            std::cout << "x^" << i;
        }
        if (i != len - 1)
        {
            std::cout << " + ";
        }
    }
}

int main()
{
    // coeff of 3x^2 + 4x - 5
    // int poly1[] = {-5, 4, 3};
    // coeff of -7x^2 -2x + 4
    // int poly2[] = {4, -2, -7};

    int m, n;
    std::cout << "\nEnter length of first polynomial: ";
    std::cin >> m;
    int poly1[m];
    std::cout << "\nEnter first polynomial: ";
    for (int i = 0; i < m; i++)
    {
        std::cin >> poly1[i];
    }

    std::cout << "\nEnter length of second polynomial: ";
    std::cin >> n;
    int poly2[n];
    std::cout << "\nEnter second polynomial: ";
    for (int i = 0; i < n; i++)
    {
        std::cin >> poly2[i];
    }

    // 12 bytes / 4 bytes = 3 elements
    // m = sizeof(poly1) / sizeof(poly1[0]);
    // n = sizeof(poly2) / sizeof(poly2[0]);

    int *sum = add(poly1, poly2, m, n);
    // int lensum = sizeof(sum) / sizeof(sum[0]); - sum takes 4 bytes for itself and 4 bytes for its address

    int lensum = max(m, n);

    std::cout << "\nAnswer : \n";
    polyprint(sum, lensum);

    return 0;
}