#include<stdio.h>

int main() {

    int unit;
    double total_amount, temp_charge, net_amount;
    scanf("Enter unit: %d", &unit);

     if (unit <= 50) {
        total_amount = (unit * 0.5);
     } else if (unit > 50 && unit <= 150) {
        total_amount = (25 + ((unit - 50) * 0.75));
     } else if (unit > 150 && unit <= 250) {
        total_amount = (100 + ((unit - 150) * 1.20));
     } else {
        total_amount = (220 + ((unit - 250) * 1.50)) ;
     }

    temp_charge = total_amount * 0.20;
    net_amount = total_amount + temp_charge;
    printf("Total electricity bill is: %.2lf", net_amount);
    return 0;
}
