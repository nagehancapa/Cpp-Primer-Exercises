// CppPrimer-Chapter2-Exercise42

#include <iostream>
#include "Sales_data.h"

// exercise 1.20
void exercise1_20()
{
    Sales_data item;
    double price = 0;
    while (std::cin >> item.bookNo >> item.units_sold >> price)
    {
        item.revenue = item.units_sold * price;
        std::cout << item.bookNo << " " << item.units_sold << " " << item.revenue << std::endl;
    }
}

// Exercise 1.21
int exercise1_21()
{
    Sales_data item1, item2;
    double price1 = 0, price2 = 0;
    std::cin >> item1.bookNo >> item1.units_sold >> price1;
    item1.revenue = item1.units_sold * price1;
    std::cin >> item2.bookNo >> item2.units_sold >> price2;
    item2.revenue = item2.units_sold * price2;
    if (item1.bookNo == item2.bookNo)
    {
        unsigned totalCnt = item1.units_sold + item2.units_sold;
        double totalRevenue = item1.revenue + item2.revenue;
        std::cout << "ISBN: " << item1.bookNo << "\nTotal sold: " << totalCnt << "\nTotal revenue: " << totalRevenue << std::endl;
        if (totalCnt != 0)
            std::cout << "Average price per book: " << totalRevenue / totalCnt << std::endl;
        else
            std::cout << "No sales" << std::endl;
    }
    else
    {
        std::cerr << "Data must refer to the same ISBN" << std::endl;
        return -1;
    }
    return 0;
}

// Exercise 1.22 - 1.23 - 1.24 -1.25 
int exercise1_22()
{
    Sales_data currItem, item;
    double currItemPrice = 0;
    double itemPrice = 0;

    if (std::cin >> currItem.bookNo >> currItem.units_sold >> currItemPrice)
    {
        currItem.revenue = currItem.units_sold * currItemPrice;
        unsigned totalCnt = currItem.units_sold;
        double totalRevenue = currItem.revenue;
        while (std::cin >> item.bookNo >> item.units_sold >> itemPrice)
        {
            item.revenue = item.units_sold * itemPrice;
            if (currItem.bookNo == item.bookNo)
            {
                totalCnt = totalCnt + item.units_sold;
                totalRevenue = totalRevenue + item.revenue;
            }
            else
            {
                std::cout << "ISBN: " << currItem.bookNo << "\nTotal sold: " << totalCnt << "\nTotal revenue: " << totalRevenue << std::endl;

                if (totalCnt != 0)
                    std::cout << "Average price per book: " << totalRevenue / totalCnt << "\n" << std::endl;
                currItem = item;
                totalCnt = item.units_sold;
                totalRevenue = item.revenue;
            }
        }
        std::cout << "ISBN: " << currItem.bookNo << "\nTotal sold: " << totalCnt << "\nTotal revenue: " << totalRevenue << std::endl;
        if (totalCnt != 0)
            std::cout << "Average price per book: " << totalRevenue / totalCnt << std::endl;
    }
    else
    {
        std::cerr << "No Data!" << std::endl;
        return -1;
    }
    return 0;
}

int main()
{
    exercise1_20();
    exercise1_21();
    exercise1_22();

    return 0;
}
