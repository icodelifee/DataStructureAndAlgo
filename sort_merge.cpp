//    ___  ____  __   ___   ___    _______  _________   ____  ___
//   / _ \/ __/ / /  / _ | / _ )  / ___/\ \/ / ___/ /  / __/ <  /
//  / // /\ \  / /__/ __ |/ _  | / /__   \  / /__/ /__/ _/   / /
// /____/___/ /____/_/ |_/____/  \___/   /_/\___/____/___/  /_/

#include <bits/stdc++.h>

int main()
{
    int size1, size2, a[30], b[30];
    std::cout << "Enter Size For Array 1 : ";
    std::cin >> size1;
    std::cout << "Enter Element Of Array 1 : " << std::endl;
    for (int i = 0; i < size1; i++)
    {
        std::cout << "Array1[" << i << "] : ";
        std::cin >> a[i];
    }
    std::cout << "Enter Size For Array 2 : ";
    std::cin >> size2;
    std::cout << "Enter Element Of Array 2 : " << std::endl;
    for (int i = 0; i < size2; i++)
    {
        std::cout << "Array2[" << i << "] : ";
        std::cin >> b[i];
    }
    //Merge array
    for (int i = size1, k = 0; i < size1 + size2 && k < size2; i++, k++)
    {
        a[i] = b[k];
    }
    int n = sizeof(a) / sizeof(a[0]);
    std::sort(a, a + n);
    std::cout << "Merged And Sorted Array : " << std::endl;
    for (int j = 0; j < size1+size2; j++)
    {
        std::cout << a[j] << " ";
    }
}
