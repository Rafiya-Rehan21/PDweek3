#include <iostream>
using namespace std;

main()
{
float pounds;
float cost;
float area;
float cost_per_pound;
float cost_per_area;
cout << "Enter size of fertilizer bag in pounds:";
cin >> pounds;
cout << "Enter cost of bag:";
cin >> cost;
cout << "Enter area per square foot:";
cin >> area;
cost_per_pound = cost/pounds;
cost_per_area = cost / area;
cout << "Cost of fertilizer per pound is:" << cost_per_pound << endl;
cout << "Cost of fertilizing per area is :" << cost_per_area << endl;
}
