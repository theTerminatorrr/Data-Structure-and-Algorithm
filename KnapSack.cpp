#include<bits/stdc++.h>
using namespace std;

struct Item
{
    int value;
    int weight;
    double ratio;
    int index;
};

bool cmpValue(Item a, Item b)
{
    return a.value > b.value;
}

bool cmpWeight(Item a, Item b)
{
    return a.weight < b.weight;
}

bool cmpRatio(Item a, Item b)
{
    return a.ratio > b.ratio;
}

void printItems(Item items[], int n)
{
    cout << "\nItems:\n";
    cout << "Item\tValue\tWeight\tValue/Weight\n";
    for (int i = 0; i < n; i++)
    {
        cout << items[i].index << "\t" << items[i].value << "\t" << items[i].weight << "\t"
             << fixed << setprecision(2) << items[i].ratio << "\n";
    }
}

void pickByValue(Item items[], int n, int capacity)
{
    sort(items, items + n, cmpValue);

    int remaining = capacity;
    int totalValue = 0;

    cout << "\nPicking items by Value (highest first):\n";
    cout << "Item\tValue\tWeight\tTaken\n";

    for (int i = 0; i < n && remaining > 0; i++)
    {
        if (items[i].weight <= remaining)
        {
            cout << items[i].index << "\t" << items[i].value << "\t" << items[i].weight << "\t" << items[i].weight << "\n";
            totalValue += items[i].value;
            remaining -= items[i].weight;
        }
    }

    cout << "Total value = " << totalValue << "\n";
}

void pickByWeight(Item items[], int n, int capacity)
{
    sort(items, items + n, cmpWeight);

    int remaining = capacity;
    int totalValue = 0;

    cout << "\nPicking items by Weight (lowest first):\n";
    cout << "Item\tValue\tWeight\tTaken\n";

    for (int i = 0; i < n && remaining > 0; i++)
    {
        if (items[i].weight <= remaining)
        {
            cout << items[i].index << "\t" << items[i].value << "\t" << items[i].weight << "\t"
                 << items[i].weight << "\n";
            totalValue += items[i].value;
            remaining -= items[i].weight;
        }
    }

    cout << "Total value = " << totalValue << "\n";
}

void pickByRatio(Item items[], int n, int capacity)
{
    sort(items, items + n, cmpRatio);

    int remaining = capacity;
    int totalValue = 0;

    cout << "\nPicking items by Value/Weight Ratio (highest first):\n";
    cout << "Item\tValue\tWeight\tTaken\n";

    for (int i = 0; i < n && remaining > 0; i++)
    {
        if (items[i].weight <= remaining)
        {
            cout << items[i].index << "\t" << items[i].value << "\t" << items[i].weight << "\t"
                 << items[i].weight << "\n";
            totalValue += items[i].value;
            remaining -= items[i].weight;
        }
    }

    cout << "Total value = " << totalValue << "\n";
}

int main()
{
    int n;
    cout << "Enter number of items: ";
    cin >> n;

    Item* items = new Item[n];

    cout << "Enter value and weight for each item:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Item " << i + 1 << " value: ";
        cin >> items[i].value;
        cout << "Item " << i + 1 << " weight: ";
        cin >> items[i].weight;
        items[i].index = i + 1;
        items[i].ratio = (double)items[i].value / items[i].weight;
    }

    int capacity;
    cout << "Enter knapsack capacity: ";
    cin >> capacity;

    printItems(items, n);

    cout << "\nChoose picking strategy:\n";
    cout << "1. By Value (highest value first)\n";
    cout << "2. By Weight (lowest weight first)\n";
    cout << "3. By Value/Weight ratio (highest ratio first)\n";
    cout << "Enter choice (1-3): ";

    int choice;
    cin >> choice;

    switch(choice)
    {
    case 1:
        pickByValue(items, n, capacity);
        break;
    case 2:
        pickByWeight(items, n, capacity);
        break;
    case 3:
        pickByRatio(items, n, capacity);
        break;
    default:
        cout << "Invalid choice.\n";
    }

    delete[] items;
    return 0;
}
