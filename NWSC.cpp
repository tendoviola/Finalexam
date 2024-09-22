#include <iostream>
#include <iomanip>

using namespace std;

// Function to calculate the total cost based on tiered pricing
double calculateCost(int unitsConsumed) {
    double cost = 0.0;

    // First 10 units @ 150 UGX/unit
    if (unitsConsumed <= 10) {
        cost = unitsConsumed * 150.0;
    }
    // Next 10 units @ 175 UGX/unit
    else if (unitsConsumed <= 20) {
        cost = 10 * 150.0 + (unitsConsumed - 10) * 175.0;
    }
    // Additional units @ 200 UGX/unit
    else {
        cost = 10 * 150.0 + 10 * 175.0 + (unitsConsumed - 20) * 200.0;
    }

    return cost;
}

// Function to apply 15% surcharge and 18% VAT
double applySurchargeAndVAT(double cost) {
    const double surchargeRate = 0.15;
    const double vatRate = 0.18;

    double surcharge = cost * surchargeRate;
    double vat = (cost + surcharge) * vatRate;
    double totalCost = cost + surcharge + vat;

    return totalCost;
}

int main() {
    int amountLoaded;
    int unitsConsumed;

    // Prompt user for input
    cout << "Enter amount loaded onto account (UGX): "<<endl;
    cin >> amountLoaded;
    cout << "\nEnter number of water units consumed: ";
    cin >> unitsConsumed;


    // Calculate total cost
    double cost = calculateCost(unitsConsumed);
    double totalCost = applySurchargeAndVAT(cost);

    // Check if user's balance is sufficient
    if (totalCost <= amountLoaded) {
        double remainingBalance = amountLoaded - totalCost;
        cout << "Transaction successful." << std::endl;
        cout << "Remaining balance: " << std::fixed << std::setprecision(2) << remainingBalance << " UGX" << std::endl;

    } else {
        cout << "Error: Insufficient balance.";
        cout << "Remaining balance: " << amountLoaded << " UGX" <<endl;

    }

    return 0;
}
